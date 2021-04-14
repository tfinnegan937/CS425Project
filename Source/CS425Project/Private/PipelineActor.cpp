// Fill out your copyright notice in the Description page of Project Settings.


#include "PipelineActor.h"

// Sets default values
APipelineActor::APipelineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PipelineComponent = CreateDefaultSubobject<UPipeline>(TEXT("Pipeline"));
	AddOwnedComponent(PipelineComponent);

}

// Called when the game starts or when spawned
void APipelineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APipelineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

