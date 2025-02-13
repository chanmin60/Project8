// Fill out your copyright notice in the Description page of Project Settings.


#include "Cyl2.h"

// Sets default values
ACyl2::ACyl2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACyl2::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

// Called every frame
void ACyl2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveCyl2(DeltaTime);
}

void ACyl2::MoveCyl2(float DeltaTime)
{
	if (IsTurningPointReached())
	{
		FVector ObjectMoveDirection = ObjectVelocity.GetSafeNormal();
		StartLocation = StartLocation + ObjectMoveDirection * ObjectMoveDistance;
		SetActorLocation(StartLocation);
		ObjectVelocity = -ObjectVelocity;
	}

	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (ObjectVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

float ACyl2::GetMovedDistance() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

bool ACyl2::IsTurningPointReached() const
{
	return GetMovedDistance() > ObjectMoveDistance;
}


