// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_BearAttack.h"
#include "BearAIController.h"
#include "Bear.h"

UBTT_BearAttack::UBTT_BearAttack()
{
	NodeName = (TEXT("Bear Attack"));
	bNotifyTick = true;
}

EBTNodeResult::Type UBTT_BearAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	// TODO 
	// 1. 공격 실행   Bear -> Attack();
	// 2. finish 호출 불가
	// 3. return :: InProgress

	// AI컨트롤러를 반환하여 폰을 가져와 공격기능 붙이기
	ABear* ControlledBear = Cast<ABear>(OwnerComp.GetAIOwner()->GetPawn());
	if (ControlledBear)
	{
		ControlledBear->Attack();
		ControlledBear->OnAttackEnd.AddLambda([&]()
			{
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			});
		
		// 공격을 들어갔을 때 AI 비헤이비어트리가 실행중이다 라는 명령어
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}