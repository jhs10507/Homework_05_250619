// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HOMEWORK05_API AMyActor : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMyActor();

private:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move();
	int32 Step();
	double Distance(FVector first, FVector second);
};
