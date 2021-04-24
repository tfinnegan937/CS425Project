// Fill out your copyright notice in the Description page of Project Settings.


#include "AUIController.h"

AAUIController::AAUIController() : ACSVStreamableActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AAUIController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAUIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}