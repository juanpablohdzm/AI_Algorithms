// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Graph.h"
#include <Kismet/GameplayStatics.h>
#include "Public/Point.h"
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
	Init();
	
}

// Called every frame
void AGraph::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGraph::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Init called"));

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

	for (TActorIterator<APoint> It(World, PointClass); It; ++It)
	{
		APoint * Obj = *It;
		WalkablePositions.Add(Obj->GetActorLocation(), true);
		Points.Add(Obj->GetActorLocation(), Obj);
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
		FVector(Position.X,Position.Y-100,Position.Z),
		FVector(Position.X,Position.Y,Position.Z+100),
		FVector(Position.X,Position.Y,Position.Z-100)

	};

	//Check all the neighbors if they are walkable
	for (const FVector& Node : PossibleNeighbors)
	{
		if (IsWalkable(Node))
		{
			WalkableNodes.Add(Node);
			//Add the accumulate cost of the current node to the adjacent ones. 
			Points[Node]->AddCost(Points[Position]->GetAccumulateCost());
		}
	}

	
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

void AGraph::Sort_BestFirst(TArray<FVector>& List)
{
	TMap<FVector, APoint*> Temp = Points;

	//The  vector with the lowest cost is placed at the front
	List.Sort([Temp](const FVector& LHS, const FVector& RHS)
	{

		int Cost1 = Temp[LHS]->GetAccumulateCost();
		int Cost2 = Temp[RHS]->GetAccumulateCost();
		if (Cost1 > Cost2)
			return false;
		else
			return true;
	});
}

void AGraph::ResetPointsCost()
{
	for (TActorIterator<APoint> It(GetWorld(), PointClass); It; ++It)
	{
		APoint * Obj = *It;
		Obj->ResetAccumulateCost();
	}
}

bool AGraph::Search(FVector& CurrentPosition)
{
	CurrentPosition = FVector::ZeroVector;
	return false;
}



