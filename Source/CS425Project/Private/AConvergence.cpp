// Fill out your copyright notice in the Description page of Project Settings.


#include "AConvergence.h"

// Sets default values
AAConvergence::AAConvergence() : CSVStreamable()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AAConvergence::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAConvergence::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAConvergence::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

