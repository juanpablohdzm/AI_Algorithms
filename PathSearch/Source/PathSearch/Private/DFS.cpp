// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/DFS.h"

FVector ADFS::Search()
{
	Init();
	//Keep track of visited position
	TArray<FVector> Visisted;

	//Create a queue for BFS
	TArray<FVector> Stack;

	FVector CurrentPosition = Player->GetActorLocation();
	FVector GoalPosition = Goal->GetActorLocation();

	//Mark the star position as visited and enqueue it
	Visisted.Add(CurrentPosition);
	Stack.EmplaceAt(0,CurrentPosition);

	while (Stack.Num() != 0)
	{
		CurrentPosition= Stack[0];
		Stack.RemoveAt(0);

		if (CurrentPosition == GoalPosition)
			return CurrentPosition;

		//Get the neighbors that are not a wall
		TArray<FVector> WalkablePos;
		CheckAdjacency(CurrentPosition, WalkablePos);

		for (const FVector& Node : WalkablePos)
		{
			if (!Visisted.Contains(Node))
			{
				Visisted.Add(Node);

				Parents.Add(Node, CurrentPosition);

				Stack.EmplaceAt(0,Node);
			}
		}
	}

	return FVector(-100.0f, -100.0f, -100.0f);
}
