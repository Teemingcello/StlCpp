// StlCpp.Build.cs에 UMG 모듈 추가


#include "WB_HealthBar.h"
#include "StlCharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UWB_HealthBar::NativeConstruct()
{
	Super::NativeConstruct();

	HpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_Hp")));
	UpdateHp();
}

void UWB_HealthBar::UpdateHp()
{
	if (CharacterStat)
	{
		HpBar->SetPercent(CharacterStat->GetHpRatio());
	}
}

void UWB_HealthBar::BindCharacterStat(UStlCharacterStatComponent* StatComp)
{
	if (StatComp)
	{
		// 델리게이트를 바인딩
		CharacterStat = StatComp;
		StatComp->OnCharacterHealthChanged.AddUObject(this, &UWB_HealthBar::UpdateHp);
	}
}
