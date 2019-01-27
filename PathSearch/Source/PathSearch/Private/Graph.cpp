// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Graph.h"
#include <Kismet/GameplayStatics.h>
#include <EngineUtils.h>

// Sets default values
AGraph::AGraph()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGraph::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGraph::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGraph::Init()
{
	TArray<AActor*> Objects;
	//Get the player
	UWorld* World = GetWorld();
	for (TActorIterator<AActor> It(World,PlayerClass); It; ++It)
	{
		Player = *It;
	}
	if (!Player) { UE_LOG(LogTemp, Warning, TEXT("Couldn't find player")); return; }

	//Get the goal
	for (TActorIterator<AActor> It(World, GoalClass); It; ++It)
	{
		Goal = *It;
	}
	if (!Goal) { UE_LOG(LogTemp, Warning, TEXT("Couldn't find goal")); return; }

	for (TActorIterator<AActor> It(World, PointClass); It; ++It)
	{
		AActor * Obj = *It;
		WalkablePositions.Add(Obj->GetActorLocation(), true);
	}

	for (TActorIterator<AActor> It(World, WallClass); It; ++It)
	{
		AActor * Obj = *It;
		WalkablePositions.Add(Obj->GetActorLocation(), false);
	}
}

bool AGraph::IsWalkable(const FVector& Position)
{
	//Check if the vector is in the list and if it is walkable 
	return WalkablePositions.Contains(Position) ? WalkablePositions[Position] : false;
}

void AGraph::CheckAdjacency(const FVector& Position, TArray<FVector>& WalkableNodes)
{
	
	//Get the neighbors position
	TArray<FVector> PossibleNeighbors
	{
		FVector(Position.X+100,Position.Y,Position.Z),
		FVector(Position.X-100,Position.Y,Position.Z),
		FVector(Position.X,Position.Y+100,Position.Z),
		FVector(Position.X,Position.Y-100,Position.Z)
	};

	//Check all the neighbors if they are walkable
	for (const FVector& Node : PossibleNeighbors)
	{
		if (IsWalkable(Node))
			WalkableNodes.Add(Node);
	}

	
}

bool AGraph::Search(FVector& CurrentPosition)
{
	CurrentPosition = FVector::ZeroVector;
	return false;
}



bool AGraph::GetPath(TArray<FVector>& Path)
{
	//Do a backtracking of the parents until we reach the player's position
	FVector Goal;
	bool Result =Search(Goal);
	if (!Parents.Contains(Goal)) { UE_LOG(LogTemp, Warning, TEXT("Parents do not contain goal")); return false; }
	FVector Temp = Parents[Goal];
	Path.Add(Temp);

	while (Temp != Player->GetActorLocation())
	{
		if (!Parents.Contains(Temp)) { UE_LOG(LogTemp, Warning, TEXT("Parents do not contain: %s"), *Temp.ToString()); }
		Temp = Parents[Temp];
		Path.Add(Temp);
	}
	return Result;
}



