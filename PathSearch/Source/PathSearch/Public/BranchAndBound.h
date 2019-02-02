// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "BranchAndBound.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ABranchAndBound : public AGraph
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	virtual void Sort_BestFirst(TArray<FVector>& List) override;
	virtual bool Search(FVector& CurrentPosition) override;
};
