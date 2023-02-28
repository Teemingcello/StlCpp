// Fill out your copyright notice in the Description page of Project Settings.


#include "StlCppSpawn.h"
#include "Bear.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AStlCppSpawn::AStlCppSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnCount = 0;
	MaxCount = 3;
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	Area = CreateDefaultSubobject<UBoxComponent>(TEXT("Spawner"));
	Area->SetupAttachment(RootComponent);

	SpawnClass = ABear::StaticClass();
	ElapsedTime = 0.f;
}

void AStlCppSpawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// FTimerHandle 
	GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, this, &AStlCppSpawn::SpawnEnemy, 5.f, true);
}

// Called when the game starts or when spawned
void AStlCppSpawn::BeginPlay()
{
	Super::BeginPlay();

}



// Called every frame
void AStlCppSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// 틱에서 델타타임 저장하여 스폰
	//ElapsedTime += DeltaTime;
	
	//if (ElapsedTime >= 5.f)
	//{
	//	SpawnEnemy();
	//}
}

void AStlCppSpawn::SpawnEnemy()
{
	FVector RandomLocation = UKismetMathLibrary::RandomPointInBoundingBox(GetActorLocation(), Area->GetScaledBoxExtent());
	if (SpawnCount < MaxCount)
	{
		auto SpawnedEnemy = GetWorld()->SpawnActor<ABear>(SpawnClass, RandomLocation, FRotator::ZeroRotator);
		if (SpawnedEnemy)
		{
			SpawnedEnemy->OnBearDied.AddLambda([this]()-> void {
				SpawnCount--;
				});
			SpawnCount++;
			ElapsedTime = 0.f;
		}
	}
}


