// Fill out your copyright notice in the Description page of Project Settings.

#include "AStar.h"
#include "Public/Point.h"

void AAStar::BeginPlay()
{
	Super::BeginPlay();
}

void AAStar::Sort_BestFirst(TArray<FVector>& List)
{
	TMap<FVector, APoint*> Temp = Points;
	FVector GoalLocation = Goal->GetActorLocation();

	//The  vector with the lowest cost is placed at the front
	List.Sort([Temp, GoalLocation](const FVector& LHS, const FVector& RHS)
	{

		int Cost1 = Temp[LHS]->GetAccumulateCost();
		Cost1 += (int)FVector::Dist(LHS, GoalLocation);
		int Cost2 = Temp[RHS]->GetAccumulateCost();
		Cost2+= (int)FVector::Dist(RHS, GoalLocation);
		if (Cost1 > Cost2)
			return false;
		else
			return true;
	});
}


bool AAStar::Search(FVector& CurrentPosition)
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

			for (const FVector& Node : List)
			{
				int Cost = Points[Node]->GetAccumulateCost();

				if (Cost < CurrentPositionCost)
				{
					//...you are wrong!
					IsTheLowestCost = false;
					break;
				}
			}
			if (IsTheLowestCost)
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
