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
private:
	virtual float CostCount(FVector Node);
protected:
	virtual void Sort_BestFirst(TArray<FVector>& List);
	virtual bool Search(FVector& CurrentPosition) override;
};
