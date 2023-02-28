// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StlCpp.h"
#include "GameFramework/Actor.h"
#include "StlCppSpawn.generated.h"

UCLASS()
class STLCPP_API AStlCppSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStlCppSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* Area;

	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int32 SpawnCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 MaxCount;

	UPROPERTY()
		TSubclassOf<class ABear> SpawnClass;
	
	float ElapsedTime;

	FTimerHandle RespawnTimerHandle;

	UFUNCTION()
		void SpawnEnemy();
};
