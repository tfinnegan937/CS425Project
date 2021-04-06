// Fill out your copyright notice in the Description page of Project Settings.


#include "AVORHorizontal.h"

// Sets default values
AAVORHorizontal::AAVORHorizontal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));

}

// Called when the game starts or when spawned
void AAVORHorizontal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAVORHorizontal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

