// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/LevelManager.h"
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>
#include <TimerManager.h>
#include "Public/BFS.h"




void ALevelManager::DrawLevel()
{
	UWorld* World = GetWorld();

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	World->SpawnActor<AActor>(PlayerClass, FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator,SpawnParameters);
	World->SpawnActor<AActor>(GoalClass, GoalPosition, FRotator::ZeroRotator,SpawnParameters);

	for (size_t i = 0; i < ColumNum; i++)
	{
		for (size_t j = 0; j < RowNum; j++)
		{
			int Prob = FMath::RandRange(0, 10);
			UE_LOG(LogTemp, Warning, TEXT("Prob: %i"),Prob);
			if (Prob >= WallProbability || GoalPosition == FVector(j*100.0f, i*100.0f, 0.0f))
				World->SpawnActor<AActor>(PointClass, FVector(j*100.0f, i*100.0f, 0.0f), FRotator::ZeroRotator, SpawnParameters);
			else
			{
				World->SpawnActor<AActor>(WallClass, FVector(j*100.0f, i*100.0f, 0.0f), FRotator::ZeroRotator, SpawnParameters);
			}
		}
	}


}

void ALevelManager::BeginPlay()
{
	Super::BeginPlay();

	if (Camera == nullptr) { UE_LOG(LogTemp, Warning, TEXT("Camera is set to null")); return; }
	Camera->SetActorLocationAndRotation(FVector(ColumNum*100 / 2.0f, RowNum*100 / 2.0f, 400.0f), FRotator(-90.0f, 0.0f, 0.0f));
	
	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!pc) { UE_LOG(LogTemp, Warning, TEXT("No controllr")); return; }
	FViewTargetTransitionParams ViewParams;
	pc->SetViewTarget(Camera, ViewParams);

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	DrawLevel();
}

void ALevelManager::DrawPath(const TArray<FVector>& Path)
{
	if (TimerCount <= 0) { GetWorld()->GetTimerManager().ClearTimer(DrawTimerHandle); return; }
	GarbageCollector.Add(GetWorld()->SpawnActor<AActor>(PathClass, Path[Path.Num()-TimerCount], FRotator::ZeroRotator, SpawnParams));
	TimerCount--;
}


void ALevelManager::DrawPathBFS()
{
	while (GarbageCollector.Num() != 0)
	{
		AActor* item = GarbageCollector.Pop(true);
		item->Destroy();
	}

	
	if (BFS)
	{
		
		TArray<FVector> Path = BFS->GetPath();
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		TimerCount = Path.Num();
		if(!GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
			GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
			
	}
}

void ALevelManager::DrawPathDFS()
{
	while(GarbageCollector.Num()!=0)
	{
		AActor* item = GarbageCollector.Pop(true);
		item->Destroy();
	}
	
	if (DFS)
	{
		TArray<FVector> Path = DFS->GetPath();
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		TimerCount = Path.Num();
		if (!GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
			GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

