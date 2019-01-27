// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DFS.h"
#include "DLFS.generated.h"

/**
 * 
 */
UCLASS()
class PATHSEARCH_API ADLFS : public ADFS
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Graph")
		int DepthLimit;

	virtual int DepthCount(FVector Node);

	virtual bool Search(FVector& CurrentPosition) override;


	
public:
	int GetDepthLimit() const { return DepthLimit; }
	void SetDepthLimit(int val) { DepthLimit = val; }
};
