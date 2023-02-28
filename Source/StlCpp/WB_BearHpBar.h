// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StlCpp.h"
#include "Blueprint/UserWidget.h"
#include "WB_BearHpBar.generated.h"

/**
 * 
 */
UCLASS()
class STLCPP_API UWB_BearHpBar : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;
	void BindBear(class ABear* OwnerBear);
	void UpdateHp();

	class ABear* MyBear;

	UPROPERTY()
		class UProgressBar* HpBar;
};
