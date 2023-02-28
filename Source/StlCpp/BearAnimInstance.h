// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StlCpp.h"
#include "Animation/AnimInstance.h"
#include "BearAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnBearAttackCheckDelegate);

/**
 * 
 */
UCLASS()
class STLCPP_API UBearAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UBearAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	void PlayAttackMontage();

	UFUNCTION()
	void AnimNotify_Attackcheck();

	FOnBearAttackCheckDelegate OnBearAttackCheck;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Bear, Meta = (AllowPrivateAccess))
	float PawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Bear, Meta = (AllowPrivateAccess))
	bool IsDead;

};
