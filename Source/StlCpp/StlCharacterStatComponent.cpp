// Fill out your copyright notice in the Description page of Project Settings.


#include "StlCharacterStatComponent.h"
#include "StlGameInstance.h"
#include "StlCppCharacter.h"



// Sets default values for this component's properties
UStlCharacterStatComponent::UStlCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;

	Level = 1;
	// ...
}

void UStlCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(Level);
}

// Called when the game starts
void UStlCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStlCharacterStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStlCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto StlGameInstance = Cast<UStlGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (StlGameInstance)
	{
		CurrentStat = StlGameInstance->GetStlCharData(NewLevel);

		if (CurrentStat)
		{
			Level = NewLevel;
			CurrentHP = CurrentStat->MaxHP;
		}
	}
}
float UStlCharacterStatComponent::GetCharacterAttackDamage()
{
	// ���� ĳ������ ���ݷ��� ��ȯ���ִ� ������
	if(CurrentStat)
	{
		return CurrentStat->Attack;
	}

	return 0.f;
}
void UStlCharacterStatComponent::SetCurrentHpByDamage(float NewDamage)
{
	CurrentHP = FMath::Clamp(CurrentHP - NewDamage, 0.f, CurrentStat->MaxHP);
	OnCharacterHealthChanged.Broadcast();

	AStlCppCharacter* Player = Cast<AStlCppCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

		if (CurrentHP <= 0)
		{
			//Todo Character death
			UE_LOG(LogTemp, Warning, TEXT("Character Die"));
			Player->Die();
		}	
}

float UStlCharacterStatComponent::GetHpRatio()
{
	if (CurrentHP)
	{
		return (CurrentHP / CurrentStat->MaxHP);
	}
	return -1;
}
