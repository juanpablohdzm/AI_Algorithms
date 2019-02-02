// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Graph.generated.h"

UCLASS()
class PATHSEARCH_API AGraph : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGraph();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	TMap<FVector, FVector> Parents;
	TMap<FVector, bool> WalkablePositions;


	UPROPERTY(EditDefaultsOnly, Category = "Path design")
		TSubclassOf<class AActor> PlayerClass;

	UPROPERTY(EditDefaultsOnly, Category = "Path design")
		TSubclassOf<class AActor> GoalClass;

	UPROPERTY(EditDefaultsOnly, Category = "Path design")
		TSubclassOf<class APoint> PointClass;

	UPROPERTY(EditDefaultsOnly, Category = "Path design")
		TSubclassOf<class AActor> WallClass;

	

	AActor* Player;
	AActor* Goal;

	TMap<FVector, class APoint*> Points;

	//Initialize player, goal and walkable positions
	virtual void Init();
	
	//Check if the position neighbors are walkable
	virtual void CheckAdjacency(const FVector& Position, TArray<FVector>& WalkableNodes);

	//....helper for checkAdjacency
	virtual bool IsWalkable(const FVector& Position);

	//...Implementation for every graph inherited class 
	virtual bool Search(FVector& CurrentPosition);

	//...Arrange the list from the lowest to the most expensive. 
	virtual void Sort_BestFirst(TArray<FVector>& List);

	//...Reset the accumulate cost of all the points
	virtual void ResetPointsCost();


public:
	virtual bool GetPath(TArray<FVector>& Path);

};
