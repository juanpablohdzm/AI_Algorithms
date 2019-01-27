// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BeamSearch.h"

void ABeamSearch::BestSelection(TArray<FVector>& List)
{
	FVector GoalLocation = Goal->GetActorLocation();

	//The nearest vector to the goal is placed at the front
	List.Sort([GoalLocation](const FVector& LHS, const FVector& RHS)
	{
		float Dist1 = FVector::Dist(LHS, GoalLocation);
		float Dist2 = FVector::Dist(RHS, GoalLocation);
		if (Dist1 > Dist2)
			return false;
		else
			return true;
	});
	
	List.SetNum(NumNodes, true);
}

bool ABeamSearch::Search(FVector& CurrentPosition)
{
	Init();
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
			BestSelection(List);
	}

	//CurrentPosition = FVector(-100.0f, -100.0f, -100.0f);
	return false;
}


