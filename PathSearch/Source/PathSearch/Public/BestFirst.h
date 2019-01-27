// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "BestFirst.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ABestFirst : public AGraph
{
	GENERATED_BODY()

protected:
	virtual void Sort_BestFirst(TArray<FVector>& List);
	virtual bool Search(FVector& CurrentPosition) override;
	
};
