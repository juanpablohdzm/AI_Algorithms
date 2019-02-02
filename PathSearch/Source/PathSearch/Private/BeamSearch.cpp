// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BeamSearch.h"
#include "Public/Point.h"

void ABeamSearch::BeginPlay()
{
	Super::BeginPlay();
}

void ABeamSearch::Sort_BestFirst(TArray<FVector>& List)
{

	Super::Sort_BestFirst(List);
	
	if(List.Num()> NumNodes)
		List.SetNum(NumNodes, true);
}



bool ABeamSearch::Search(FVector& CurrentPosition)
{
	Init();

	ResetPointsCost();

	//Keep track of visited position
	TArray<FVector> Visisted;

	//Create a queue for BFS
	TArray<FVector> List;

	CurrentPosition = Player->GetActorLocation();
	FVector GoalPosition = Goal->GetActorLocation();

	//Mark the star position as visited and enqueue it
	Visisted.Add(CurrentPosition);
	List.EmplaceAt(0, CurrentPosition);

	while (List.Num() != 0)
	{
		CurrentPosition = List[0];
		List.RemoveAt(0);

		if (CurrentPosition == GoalPosition)
			return true;

		//Get the neighbors that are not a wall
		TArray<FVector> WalkablePos;
		CheckAdjacency(CurrentPosition, WalkablePos);

		for (const FVector& Node : WalkablePos)
		{
			if (!Visisted.Contains(Node))
			{
				Visisted.Add(Node);

				Parents.Add(Node, CurrentPosition);

				List.EmplaceAt(0, Node);
			}
		}
		if (List.Num())
			Sort_BestFirst(List);
	}

	//CurrentPosition = FVector(-100.0f, -100.0f, -100.0f);
	return false;
}


