// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	#include <windows.h>
	#define ISWINDOWS true
#else
	#define ISWINDOWS false
#endif

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <string.h>
#include <codecvt>
#include <locale>
#include "Pipeline.generated.h"

struct EyeDataFrame
{
	__int32 x;
	__int32 y;
	__int16 timestamp;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CS425PROJECT_API UPipeline : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPipeline();
	~UPipeline();

	// Sends a data frame along pipe
	void SendData(EyeDataFrame frame);

	void CreatePipe(const LPCWSTR pipeName);
	void ClosePipe();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	HANDLE Pipe;
		
};