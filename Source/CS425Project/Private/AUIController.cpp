#include "AUIController.h"

AUIController::AUIController() : ACSVStreamableActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AUIController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AUIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}