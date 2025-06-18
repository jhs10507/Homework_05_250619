// Fill out your copyright notice in the Description page of Project Settings.
#include <iostream>
#include "MyActor.h"
#include "CoreMinimal.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	start;
	Super::BeginPlay();
	void move();
	int32_t step();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void move()
{
	TArray<FVector2D> VectorArray;

	for (int32 i = 0; i < 10; i++)
	{
		VectorArray.Add(FVector2D(i * 10.0f, i * 20.0f));
	}

	for (int32 i = 0; i < VectorArray.Num(); i++)
	{
		const FVector2D& Vec = VectorArray[i];
		UE_LOG(LogTemp, Warning, TEXT("Vector %d: X = %f, Y = %f"), i, Vec.X, Vec.Y);
	}
}

int32_t step(FVector first, FVector second)
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