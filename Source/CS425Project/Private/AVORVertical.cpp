// Fill out your copyright notice in the Description page of Project Settings.


#include "AVORVertical.h"

// Sets default values
AAVORVertical::AAVORVertical() : ACSVStreamableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AAVORVertical::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAVORVertical::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

