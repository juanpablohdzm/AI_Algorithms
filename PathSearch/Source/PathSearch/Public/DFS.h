// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Graph.h"
#include "DFS.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ADFS : public AGraph
{
	GENERATED_BODY()

protected:
	virtual FVector Search() override;
	
};
