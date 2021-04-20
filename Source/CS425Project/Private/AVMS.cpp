// Fill out your copyright notice in the Description page of Project Settings.


#include "AVMS.h"

// Sets default values
AAVMS::AAVMS() : CSVStreamable()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AAVMS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAVMS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAVMS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

