// Fill out your copyright notice in the Description page of Project Settings.


#include "ASmoothPursuit.h"

// Sets default values
AASmoothPursuit::AASmoothPursuit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AASmoothPursuit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AASmoothPursuit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

