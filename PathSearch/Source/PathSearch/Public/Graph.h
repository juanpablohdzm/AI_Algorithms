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
		TSubclassOf<class AActor> PointClass;

	UPROPERTY(EditDefaultsOnly, Category = "Path design")
		TSubclassOf<class AActor> WallClass;

	

	AActor* Player;
	AActor* Goal;


	virtual void Init();
	virtual void CheckAdjacency(const FVector& Position, TArray<FVector>& WalkableNodes);
	virtual bool IsWalkable(const FVector& Position);
	virtual bool Search(FVector& CurrentPosition);


public:
	virtual bool GetPath(TArray<FVector>& Path);

};
