// StlCpp.Build.cs�� UMG ��� �߰�

#pragma once

#include "StlCpp.h"
#include "Blueprint/UserWidget.h"
#include "WB_HealthBar.generated.h"

/**
 * 
 */
UCLASS()
class STLCPP_API UWB_HealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	// �⺻ �����ڿ� �ٸ��� ������ ���� �����ڴ� �ν��� �ȵ�
	virtual void NativeConstruct() override;
	void BindCharacterStat(class UStlCharacterStatComponent* StatComp);
	void UpdateHp();

	class UStlCharacterStatComponent* CharacterStat;

	UPROPERTY()
	class UProgressBar* HpBar;

};
