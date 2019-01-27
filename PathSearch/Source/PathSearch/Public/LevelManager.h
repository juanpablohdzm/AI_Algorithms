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
	//We create an array to store the path and then delete it 
	TArray<AActor*> GarbageCollector;
	
	//Variables to draw the path slowly 
	FTimerHandle DrawTimerHandle;
	int32 TimerCount;
	
	//Spawn parameters for the path
	FActorSpawnParameters SpawnParams;

	UFUNCTION()
		void DrawPath(const TArray<FVector>& Path);
protected:

	//Information to create the level...
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


	//Objects responsible for their own type of path search
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Path")
		class AGraph * BFS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Path")
		class AGraph * DFS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Path")
		class ADLFS * DLFS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Path")
		class AGraph * HillClim;

	virtual void DrawLevel();


public:

	virtual void BeginPlay() override;


	//Functions to be called by the UI 
	UFUNCTION(BlueprintCallable)
		void DrawPathBFS();

	UFUNCTION(BlueprintCallable)
		void DrawPathDFS();

	UFUNCTION(BlueprintCallable)
		void DrawPathDLFS();

	UFUNCTION(BlueprintCallable)
		void DrawPathIDDS();

	UFUNCTION(BlueprintCallable)
		void DrawPathHill();

};
