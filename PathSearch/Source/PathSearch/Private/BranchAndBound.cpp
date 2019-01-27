// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BranchAndBound.h"

void ABranchAndBound::Sort_BestFirst(TArray<FVector>& List)
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
}

float ABranchAndBound::CostCount(FVector Node)
{
	FVector count = Node;
	while (Node != Player->GetActorLocation())
	{
		if (!Parents.Contains(Node)) { UE_LOG(LogTemp, Warning, TEXT("Parents do not contain: %s in depth count"), *Node.ToString()); break; }
		Node = Parents[Node];
		count+=Node;
	}

	return count.Size();
}

bool ABranchAndBound::Search(FVector& CurrentPosition)
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
		{
			//Suppose the current path is the one with lowest cost...
			bool IsTheLowestCost = true;
			float CurrentPositionCost = CostCount(CurrentPosition);

			for (const FVector& Node: List)
			{
				float Cost = CostCount(Node);
				Cost += CurrentPosition.Size();

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
