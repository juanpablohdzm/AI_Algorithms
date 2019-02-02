// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Point.generated.h"

UCLASS()
class PATHSEARCH_API APoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int Cost;
	int AccumulateCost;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category="Path Finding")
	virtual	int GetCost() const { return Cost; }

	void SetCost(int cost) { Cost = cost; }

	int GetAccumulateCost() const { return AccumulateCost; }
	void SetAccumulateCost(int val) { AccumulateCost = val; }
	void ResetAccumulateCost() { AccumulateCost = Cost; }
	int AddCost(int val) { return AccumulateCost += val; }
};
