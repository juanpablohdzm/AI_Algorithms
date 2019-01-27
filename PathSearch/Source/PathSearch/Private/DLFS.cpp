// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/DLFS.h"

int ADLFS::DepthCount(FVector Node)
{
	int count = 0;
	while (Node != Player->GetActorLocation())
	{
		if (!Parents.Contains(Node)) { UE_LOG(LogTemp, Warning, TEXT("Parents do not contain: %s in depth count"), *Node.ToString()); break; }
		Node = Parents[Node];
		count++;
	}

	return count;
}

bool ADLFS::Search(FVector& CurrentPosition)
{
	Init();
	//Keep track of visited position
	TArray<FVector> Visisted;

	//Create a queue for BFS
	TArray<FVector> Stack;

	CurrentPosition = Player->GetActorLocation();
	FVector GoalPosition = Goal->GetActorLocation();

	//Mark the star position as visited and enqueue it
	Visisted.Add(CurrentPosition);
	Stack.EmplaceAt(0, CurrentPosition);

	while (Stack.Num() != 0)
	{
		CurrentPosition = Stack[0];
		Stack.RemoveAt(0);

		if (CurrentPosition == GoalPosition)
			return true;
		else
			if (DepthCount(CurrentPosition) >= GetDepthLimit())
				return false;

		//Get the neighbors that are not a wall
		TArray<FVector> WalkablePos;
		CheckAdjacency(CurrentPosition, WalkablePos);

		for (const FVector& Node : WalkablePos)
		{
			if (!Visisted.Contains(Node) )
			{
				Visisted.Add(Node);

				Parents.Add(Node, CurrentPosition);

				Stack.EmplaceAt(0, Node);
			}
		}
	}

	CurrentPosition=FVector(-100.0f, -100.0f, -100.0f);
	return false;
}
