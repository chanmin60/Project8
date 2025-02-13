// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cyl2.generated.h"

UCLASS()
class SPARTA_API ACyl2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACyl2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	FVector ObjectVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	float ObjectMoveDistance = 100;

	FVector StartLocation;

	void MoveCyl2(float DeltaTime);

	float GetMovedDistance() const;

	bool IsTurningPointReached() const;

};
