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
	// 1. ���� ����   Bear -> Attack();
	// 2. finish ȣ�� �Ұ�
	// 3. return :: InProgress

	// AI��Ʈ�ѷ��� ��ȯ�Ͽ� ���� ������ ���ݱ�� ���̱�
	ABear* ControlledBear = Cast<ABear>(OwnerComp.GetAIOwner()->GetPawn());
	if (ControlledBear)
	{
		ControlledBear->Attack();
		ControlledBear->OnAttackEnd.AddLambda([&]()
			{
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			});
		
		// ������ ���� �� AI �����̺��Ʈ���� �������̴� ��� ��ɾ�
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}