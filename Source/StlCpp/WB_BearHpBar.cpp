// Fill out your copyright notice in the Description page of Project Settings.


#include "WB_BearHpBar.h"
#include "Bear.h"
#include "Components/ProgressBar.h"

void UWB_BearHpBar::NativeConstruct()
{
	Super::NativeConstruct();

	HpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_Bear_HP")));
	UpdateHp();
}

void UWB_BearHpBar::UpdateHp()
{
	if (MyBear)
	{
		HpBar->SetPercent(MyBear->GetBearHpRatio());
	}
}

void UWB_BearHpBar::BindBear(class ABear* OwnerBear)
{
	if (OwnerBear)
	{
		MyBear = OwnerBear;
		OwnerBear->OnBearHealthChanged.AddUObject(this, &UWB_BearHpBar::UpdateHp);
	}
}