// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "BeamSearch.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ABeamSearch : public AGraph
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
		int NumNodes;

	virtual bool Search(FVector& CurrentPosition) override;
	virtual void Sort_BestFirst(TArray<FVector>& List) override;
	
};
