// Fill out your copyright notice in the Description page of Project Settings.
#include "MyActor.h"
#include "CoreMinimal.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

void AMyActor::Move()
{
	FVector Location = FVector::ZeroVector;
	for (int i = 0; i < 10; ++i)
	{
		int32 AddX = Step();
		int32 AddY = Step();

		Location += FVector(AddX, AddY, 0);
		UE_LOG(LogTemp, Warning, TEXT("%f %f"), Location.X, Location.Y);
	}
}

int32 AMyActor::Step()
{
	return FMath::RandRange(0, 1);
}

double AMyActor::Distance(FVector first, FVector second)
{
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	return FMath::Sqrt(dx*dx + dy*dy);
}

//void TriggerEventWithProbability(float Probability)
//{
//	int32 RandomValue = FMath::RandRange(1, 100);
//	if (RandomValue <= Probability)
//	{
//		UE_LOG(LogTemp, Log, TEXT("Event Triggered!"));
//	}
//	else
//	{
//		UE_LOG(LogTemp, Log, TEXT("Event Not Triggered!"));
//	}
//}