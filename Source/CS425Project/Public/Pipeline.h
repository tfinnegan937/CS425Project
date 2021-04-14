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
#include "FCreatePipeWorker.h"
#include "EyeFrameData.h"
#include <string.h>
#include <codecvt>
#include <locale>
#include "Pipeline_Constants.h"
#include "Pipeline.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CS425PROJECT_API UPipeline : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPipeline();
	~UPipeline();

	// Sends a data frame along pipe
	void SendData(EyeFrameData frame);

	void CreatePipe(const LPCWSTR pipeName);
	void ClosePipe();

	bool IsPipeReady();

	UFUNCTION()
	void SendTest();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	HANDLE Pipe;
	FCreatePipeWorker* PipeWorker;
	FRunnableThread* PipeWorkerThread;
};