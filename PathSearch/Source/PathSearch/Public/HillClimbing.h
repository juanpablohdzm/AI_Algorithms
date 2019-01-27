// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "HillClimbing.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API AHillClimbing : public AGraph
{
	GENERATED_BODY()

protected:
	virtual void BestSelection(TArray<FVector>& List);
	virtual bool Search(FVector& CurrentPosition) override;
	
};
