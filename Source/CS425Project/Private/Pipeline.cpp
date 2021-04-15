// Fill out your copyright notice in the Description page of Project Settings.


#include "Pipeline.h"

// Sets default values for this component's properties
UPipeline::UPipeline()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

UPipeline::~UPipeline()
{
    ClosePipe();
}


// Called when the game starts
void UPipeline::BeginPlay()
{
	Super::BeginPlay();

	CreatePipe(PIPELINE_NAME_LONG);

    //Starts a send test on the pipeline 10 seconds after the pipe creation is triggered.
    FTimerHandle UnusedHandle;
    GetWorld()->GetTimerManager().SetTimer(UnusedHandle, this, &UPipeline::SendTest, 10, false);

}

void UPipeline::SendTest()
{
    /*EyeFrameData testFrame1;
    EyeFrameData testFrame2;
    EyeFrameData testFrame3;

    testFrame1.x = 5;
    testFrame1.y = 10;
    testFrame1.timestamp = 101;

    testFrame2.x = 7;
    testFrame2.y = 16;
    testFrame2.timestamp = 50;

    testFrame3.x = 2;
    testFrame3.y = -1000;
    testFrame3.timestamp = 77;
    SendData(testFrame1);
    SendData(testFrame2);
    SendData(testFrame3);*/
}

#if ISWINDOWS
void UPipeline::CreatePipe(const LPCWSTR pipeName)
{
    if (FPlatformProcess::SupportsMultithreading()) {
        PipeWorker = new FCreatePipeWorker(pipeName);
        PipeWorkerThread = FRunnableThread::Create(PipeWorker, TEXT("Pipe Opening Thread"));
    }
}

bool UPipeline::IsPipeReady()
{
    if (!PipeWorker) return false;
    return PipeWorker->CheckCompletion();
}

void UPipeline::SendData(EyeFrameData frame)
{
    if (PipeWorker->CheckCompletion()) {
        PipeWorker->SendData(frame);
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Sending data!")));
    }
    else {
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Voiding data!")));
    }
   
}

void UPipeline::ClosePipe()
{
    CloseHandle(Pipe);
}
#endif



// Called every frame
void UPipeline::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

