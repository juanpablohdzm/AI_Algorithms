// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"

#include "LevelManager.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ALevelManager : public ALevelScriptActor
{
	GENERATED_BODY()
private:
	TArray<AActor*> GarbageCollector;
	
	FTimerHandle DrawTimerHandle;
	int32 TimerCount;
	
	FActorSpawnParameters SpawnParams;

	UFUNCTION()
		void DrawPath(const TArray<FVector>& Path);
protected:

	UPROPERTY(EditDefaultsOnly, Category="Level design")
		int ColumNum;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		int RowNum;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		int WallProbability;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		FVector GoalPosition;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		TSubclassOf<class AActor> PlayerClass;

	UPROPERTY(EditDefaultsOnly,  Category = "Level design")
		TSubclassOf<class AActor> GoalClass;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		TSubclassOf<class AActor> PathClass;

	UPROPERTY(EditDefaultsOnly,  Category = "Level design")
		TSubclassOf<class AActor> PointClass;

	UPROPERTY(EditDefaultsOnly, Category = "Level design")
		TSubclassOf<class AActor> WallClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level design")
		AActor * Camera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level design")
		class AGraph * BFS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level design")
		class AGraph * DFS;

	virtual void DrawLevel();


public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void DrawPathBFS();

	UFUNCTION(BlueprintCallable)
		void DrawPathDFS();

};
