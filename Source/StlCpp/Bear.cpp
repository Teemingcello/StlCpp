// Fill out your copyright notice in the Description page of Project Settings.


#include "Bear.h"
#include "BearAIController.h"
#include "Perception/PawnSensingComponent.h"
#include "BearAnimInstance.h"
#include "BrainComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/WidgetComponent.h"
#include "WB_BearHpBar.h"

// Sets default values
ABear::ABear()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MaxHP = 100.f;
	CurrentHP = MaxHP;
	GetCharacterMovement()->MaxWalkSpeed = 200.f;
	IsAttacking = false;
	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Mesh(TEXT("/Game/Bear/Enemy_Bear.Enemy_Bear"));
	if (SK_Mesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_Mesh.Object);
	}
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
	GetCapsuleComponent()->SetCapsuleRadius(88.f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Enemy"));

	
	static ConstructorHelpers::FClassFinder<UAnimInstance> Anim(TEXT("/Game/Bear/Animations/ABP_Bear.ABP_Bear_C"));

	if (Anim.Succeeded())
	{
		GetMesh()->SetAnimClass(Anim.Class);
	}
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	AIControllerClass = ABearAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	
	//// Pawnsensing

	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 500.f;
	PawnSensing->SetPeripheralVisionAngle(45.f);

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack1(TEXT("/Game/Bear/Animations/AM_Attack1.AM_Attack1"));
	if (AM_Attack1.Succeeded())
	{
		Attack1 = AM_Attack1.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack2(TEXT("/Game/Bear/Animations/AM_Attack2.AM_Attack2"));
	if (AM_Attack2.Succeeded())
	{
		Attack2 = AM_Attack2.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack3(TEXT("/Game/Bear/Animations/AM_Attack3.AM_Attack3"));
	if (AM_Attack3.Succeeded())
	{
		Attack3 = AM_Attack3.Object;
	}


	BearHpWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComp"));
	BearHpWidget->SetupAttachment(RootComponent);
	BearHpWidget->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
	BearHpWidget->SetWidgetSpace(EWidgetSpace::Screen);

	static ConstructorHelpers::FClassFinder<UUserWidget> BearHealthBar(TEXT("/Game/UI/BearHPBar.BearHPBar_C"));
	{
		BearHpWidget->SetWidgetClass(BearHealthBar.Class);
		BearHpWidget->SetDrawSize(FVector2D(150.f, 15.f));
	}
}

void ABear::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Bear_Anim = Cast<UBearAnimInstance>(GetMesh()->GetAnimInstance());

	PawnSensing->OnSeePawn.AddDynamic(this, &ABear::SetTarget);
	Bear_Anim->OnBearAttackCheck.AddUObject(this, &ABear::AttackCheck);
	Bear_Anim->OnMontageEnded.AddDynamic(this, &ABear::OnAttackMontageEnded);

	BearHpWidget->InitWidget();
	UWB_BearHpBar* BearHealthBar = Cast<UWB_BearHpBar>(BearHpWidget->GetUserWidgetObject());
	if (BearHealthBar)
	{
		BearHealthBar->BindBear(this);
	}
}

// Called when the game starts or when spawned
void ABear::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsAttackCheck)
	{
		AttackCheck();
	}

}

// Called to bind functionality to input
void ABear::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ABear::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHP = FMath::Clamp(CurrentHP - Damage, 0.f, MaxHP);
	OnBearHealthChanged.Broadcast();

	if (CurrentHP <= 0)
	{
		Die();
	}

	return 0.f;
}
void ABear::SetTarget(APawn* Pawn)
{
	//TODO if(!TargetPawn)  Targetpawn =Pawn;
	if (TargetPawn == nullptr)
	{
		TargetPawn = Pawn;
		ABearAIController* AIController = Cast<ABearAIController>(GetController());
		if (AIController)
		{
			AIController->SetTarget(Pawn);
		}
	}
	//TODO AICotnroller Target Set;
}

void ABear::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	OnAttackEnd.Broadcast();
	IsAttacking = false;
}

void ABear::Attack()
{
	if (!Bear_Anim->IsAnyMontagePlaying())
	{
		IsAttacking = true;

		switch (FMath::RandRange(0, 2))
		{
		case 0: Bear_Anim->Montage_Play(Attack1);
			break;
		case 1: Bear_Anim->Montage_Play(Attack2);
			break;
		case 2: Bear_Anim->Montage_Play(Attack3);
			break;

		default:
			break;
		}
	}
}

void ABear::AttackCheck()
{
	TArray<FHitResult> HitArray;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	//TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectType;
	//TraceObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel2));

	FVector Bear_R_Socket = GetMesh()->GetSocketLocation(FName(TEXT("Bear_R_Socket")));
	FVector Bear_L_Socket = GetMesh()->GetSocketLocation(FName(TEXT("Bear_L_Socket")));
	UAnimMontage* CurrentMontage = Bear_Anim->GetCurrentActiveMontage();

	float AttackRadius = 50.f;
	bool Hit = false;

	if (CurrentMontage == Attack1)
	{
	Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(),
		Bear_R_Socket,
		Bear_R_Socket,
		AttackRadius,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2),
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		HitArray, true, FLinearColor::Red, FLinearColor::Green, 1.f);
	}
	else if (CurrentMontage == Attack2)
	{
	Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(),
		Bear_L_Socket,
		Bear_L_Socket,
		AttackRadius,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2),
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration, 
		HitArray, true, FLinearColor::Red, FLinearColor::Green, 1.f);
	}
	else if (CurrentMontage == Attack3)
	{
	Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(),
		Bear_L_Socket,
		Bear_R_Socket,
		AttackRadius,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2),
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		HitArray, true, FLinearColor::Red, FLinearColor::Green, 1.f);
	}
	else
	{
	}
	if (Hit)
	{
		for (const auto& HitResult : HitArray)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Bear Hit: %s"), *HitResult.GetActor()->GetName()));
			ActorsToIgnore.Add(HitResult.GetActor());
			UGameplayStatics::ApplyDamage(HitResult.GetActor(), 10.f, GetController(), this, nullptr);
		}
	}
}

void ABear::Die()
{
	// 기능 종료
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	GetCharacterMovement()->StopMovementImmediately();
	
	Bear_Anim->StopAllMontages(0.f);
	OnBearDied.Broadcast();

	Cast<AAIController>(GetController())->BrainComponent->StopLogic(TEXT("Death"));

	FTimerHandle DestroyHandle;
	float Delaytime = 3.f;
	GetWorld()->GetTimerManager().SetTimer(DestroyHandle, FTimerDelegate::CreateLambda([&]()
		{
			Destroy();
		}), Delaytime, false);
}

float ABear::GetBearHpRatio()
{
	if (CurrentHP)
	{
		return (CurrentHP / MaxHP);
	}

	return -1;
}
