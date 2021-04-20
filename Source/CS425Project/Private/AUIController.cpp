#include "AUIController.h"

AUIController::AUIController() : ACSVStreamableActor()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
}

void AUIController::BeginPlay()
{
	Super::BeginPlay();
}

void AUIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}