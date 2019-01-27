// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BFS.h"
#include <Queue.h>

FVector ABFS::Search()
{
	Init();
	//Keep track of visited position
	TArray<FVector> Visisted;

	//Create a queue for BFS
	TQueue<FVector> Queue;

	FVector CurrentPosition = Player->GetActorLocation();
	FVector GoalPosition = Goal->GetActorLocation();

	//Mark the star position as visited and enqueue it
	Visisted.Add(CurrentPosition);
	Queue.Enqueue(CurrentPosition);

	while (!Queue.IsEmpty())
	{
		Queue.Dequeue(CurrentPosition);
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

				Queue.Enqueue(Node);
			}
		}
	}
	
	return FVector(-100.0f, -100.0f, -100.0f);
}
