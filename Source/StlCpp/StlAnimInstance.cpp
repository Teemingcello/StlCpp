// Fill out your copyright notice in the Description page of Project Settings.


#include "StlAnimInstance.h"
#include "StlCppCharacter.h"
#include "StlCharacterStatComponent.h"


UStlAnimInstance::UStlAnimInstance()
{
	PawnSpeed = 0.f;
	bIsInAir = false;

	ConstructorHelpers::FObjectFinder<UAnimMontage>AM_Attack(TEXT("/Game/Animations/AM_Attack.AM_Attack"));
	if (AM_Attack.Succeeded())
	{
		AttackMontage = AM_Attack.Object;
	}

	ConstructorHelpers::FObjectFinder<UAnimMontage>AM_Death(TEXT("/Game/Animations/AM_Death.AM_Death"));
	if (AM_Death.Succeeded())
	{
		DieMontage = AM_Death.Object;
	}
}

void UStlAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	AStlCppCharacter* Player = Cast<AStlCppCharacter>(TryGetPawnOwner());

	if (::IsValid(Player))
	{
		PawnSpeed = Player->GetVelocity().Size();

		auto Character = Cast<ACharacter>(Player);
		if (Character)
		{
			bIsInAir = Character->GetCharacterMovement()->IsFalling();
		}
	}
}

void UStlAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage);
	}
}
void UStlAnimInstance::PlayDeathMontage()
{
	if (!Montage_IsPlaying(DieMontage))
	{
		Montage_Play(DieMontage, 0.5);
	}

}

void UStlAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	FName SectionName = (*(FString(TEXT("Attack")) + FString::FromInt(NewSection)));
	Montage_JumpToSection(SectionName, AttackMontage);
}


void UStlAnimInstance::AnimNotify_NextAttackCheck()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Check Notify"));
	OnNextAttackCheck.Broadcast();
}
