// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BFS.h"
#include <Queue.h>

void ABFS::BeginPlay()
{
	Super::BeginPlay();
}

bool ABFS::Search(FVector& CurrentPosition)
{
	Init();

	//Keep track of visited position
	TArray<FVector> Visisted;

	//Create a queue for BFS
	TQueue<FVector> Queue;

	CurrentPosition = Player->GetActorLocation();
	FVector GoalPosition = Goal->GetActorLocation();

	//Mark the star position as visited and enqueue it
	Visisted.Add(CurrentPosition);
	Queue.Enqueue(CurrentPosition);

	while (!Queue.IsEmpty())
	{
		Queue.Dequeue(CurrentPosition);
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

				Queue.Enqueue(Node);
			}
		}
	}
	
	CurrentPosition=FVector(-100.0f, -100.0f, -100.0f);
	return false;
}
