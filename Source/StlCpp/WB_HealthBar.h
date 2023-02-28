// StlCpp.Build.cs에 UMG 모듈 추가

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

	// 기본 생성자와 다르게 헤더명과 같은 생성자는 인식이 안됨
	virtual void NativeConstruct() override;
	void BindCharacterStat(class UStlCharacterStatComponent* StatComp);
	void UpdateHp();

	class UStlCharacterStatComponent* CharacterStat;

	UPROPERTY()
	class UProgressBar* HpBar;

};
