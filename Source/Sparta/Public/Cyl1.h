// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cyl1.generated.h"

UCLASS()
class SPARTA_API ACyl1 : public AActor
{
	GENERATED_BODY()

public:
	ACyl1();
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	FVector ObjectVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")

	float ObjectMoveDistace = 100;

	UPROPERTY(EditAnywhere, Category = "ObjectSettings")
	FRotator RotationVelocity = FRotator(0, 10, 0);

	FVector StartLocation;

	void MoveCyl1(float DeltaTime);

	void RotateCyl1(float DeltaTime);

	float GetMoveDistance() const;

	bool IsTurningPointReached() const;

};