// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/LevelManager.h"
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>
#include <TimerManager.h>
#include "Public/Graph.h"
#include "Public/Point.h"
#include "Public/DLFS.h"




void ALevelManager::DrawLevel()
{
	//Level creation
	UWorld* World = GetWorld();

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Spawn player and goal
	World->SpawnActor<AActor>(PlayerClass, FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator,SpawnParameters);
	World->SpawnActor<AActor>(GoalClass, GoalPosition, FRotator::ZeroRotator,SpawnParameters);

	//Spawn the level either a node or a wall
	for (size_t i = 0; i < ColumNum; i++)
	{
		for (size_t j = 0; j < RowNum; j++)
		{
			int Prob = FMath::RandRange(0, 10);
			UE_LOG(LogTemp, Warning, TEXT("Prob: %i"),Prob);
			if (Prob >= WallProbability || GoalPosition == FVector(j*100.0f, i*100.0f, 0.0f))
			{
				APoint * Point;
				Point = World->SpawnActor<APoint>(PointClass, FVector(j*100.0f, i*100.0f, 0.0f), FRotator::ZeroRotator, SpawnParameters);
				Point->SetCost(FMath::RandRange(0, 3));
			}
			else
			{
				World->SpawnActor<AActor>(WallClass, FVector(j*100.0f, i*100.0f, 0.0f), FRotator::ZeroRotator, SpawnParameters);
			}
		}
	}


}

void ALevelManager::CleanLevel()
{
	//Destroy the previous path
	while (GarbageCollector.Num() != 0)
	{
		AActor* item = GarbageCollector.Pop(true);
		item->Destroy();
	}
}

void ALevelManager::DrawPath(const TArray<FVector>& Path)
{
	if (TimerCount <= 0) { GetWorld()->GetTimerManager().ClearTimer(DrawTimerHandle); return; }
	GarbageCollector.Add(GetWorld()->SpawnActor<AActor>(PathClass, Path[Path.Num() - TimerCount], FRotator::ZeroRotator, SpawnParams));
	TimerCount--;
}

void ALevelManager::BeginPlay()
{
	Super::BeginPlay();

	//Set the camera position and rotation
	if (Camera == nullptr) { UE_LOG(LogTemp, Warning, TEXT("Camera is set to null")); return; }
	Camera->SetActorLocationAndRotation(FVector(ColumNum*100 / 2.0f, RowNum*100 / 2.0f, 400.0f), FRotator(-90.0f, 0.0f, 0.0f));
	
	//Change view target to the camera previously set 
	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!pc) { UE_LOG(LogTemp, Warning, TEXT("No controllr")); return; }
	FViewTargetTransitionParams ViewParams;
	pc->SetViewTarget(Camera, ViewParams);

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	DrawLevel();
}




void ALevelManager::DrawPathBFS()
{
	CleanLevel();
	
	if (BFS && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		
		TArray<FVector> Path;
		BFS->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();	
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
			
	}
}

void ALevelManager::DrawPathDFS()
{
	CleanLevel();
	
	if (DFS && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		DFS->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathDLFS()
{
	CleanLevel();

	if (DLFS && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		DLFS->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathIDDS()
{

	CleanLevel();

	if (DLFS && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		int MaxDepth = DLFS->GetDepthLimit();
		TArray<FVector> Path;
		for (int i = 0; i < MaxDepth; i++)
		{
			DLFS->SetDepthLimit(i);
			if (DLFS->GetPath(Path))
				break;
			else
				if (i != MaxDepth-1)
					Path.Empty();
		}
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathHill()
{
	CleanLevel();

	if (HillClim && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		HillClim->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();		
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathBestFirst()
{
	CleanLevel();

	if (BestFirst && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		BestFirst->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathBeamSearch()
{
	CleanLevel();

	if (BeamSearch && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		BeamSearch->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathBranchAndBound()
{
	CleanLevel();

	if (BranchAndBound && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		BranchAndBound->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

void ALevelManager::DrawPathAStar()
{
	CleanLevel();

	if (AStar && !GetWorld()->GetTimerManager().IsTimerActive(DrawTimerHandle))
	{
		TArray<FVector> Path;
		AStar->GetPath(Path);
		FTimerDelegate DrawTimerDelegate;
		DrawTimerDelegate.BindUFunction(this, FName("DrawPath"), Path, SpawnParams);

		//Draw the path every .3 seconds
		TimerCount = Path.Num();
		GetWorld()->GetTimerManager().SetTimer(DrawTimerHandle, DrawTimerDelegate, 0.3f, true);
	}
}

