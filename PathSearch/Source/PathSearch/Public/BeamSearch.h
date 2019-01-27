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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
		int NumNodes;

	virtual void BestSelection(TArray<FVector>& List);
	virtual bool Search(FVector& CurrentPosition) override;
	
};
