// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BranchAndBound.h"
#include "Public/Point.h"

void ABranchAndBound::BeginPlay()
{
	Super::BeginPlay();
}

void ABranchAndBound::Sort_BestFirst(TArray<FVector>& List)
{
	Super::Sort_BestFirst(List);
}



bool ABranchAndBound::Search(FVector& CurrentPosition)
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
		{
			//Suppose the current path is the one with lowest cost...
			bool IsTheLowestCost = true;
			int CurrentPositionCost = Points[CurrentPosition]->GetAccumulateCost();

			for (const FVector& Node: List)
			{
				int Cost = Points[Node]->GetAccumulateCost();

				if (Cost < CurrentPositionCost)
				{
					//...you are wrong!
					IsTheLowestCost = false;
					break;
				}
			}
			if(IsTheLowestCost)
				return true;
		}

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
