// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "AStar.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API AAStar : public AGraph
{
	GENERATED_BODY()

public:
	AAStar();
	
protected:

	UPROPERTY(EditDefaultsOnly, Category="Path Finding")
		float HeuristicPorcentage;

	virtual void BeginPlay() override;

	virtual void Sort_BestFirst(TArray<FVector>& List) override;
	virtual bool Search(FVector& CurrentPosition) override;
};
