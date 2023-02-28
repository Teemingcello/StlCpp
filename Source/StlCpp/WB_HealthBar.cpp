// StlCpp.Build.cs�� UMG ��� �߰�


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
		// ��������Ʈ�� ���ε�
		CharacterStat = StatComp;
		StatComp->OnCharacterHealthChanged.AddUObject(this, &UWB_HealthBar::UpdateHp);
	}
}
