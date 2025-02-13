#include "Cyl1.h"

ACyl1::ACyl1()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACyl1::BeginPlay()
{
	Super::BeginPlay();

}

void ACyl1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotateCyl1(DeltaTime);
}

void ACyl1::RotateCyl1(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}
