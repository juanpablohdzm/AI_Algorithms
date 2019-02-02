// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "BFS.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ABFS : public AGraph
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	virtual bool Search(FVector& CurrentPosition) override;
};
