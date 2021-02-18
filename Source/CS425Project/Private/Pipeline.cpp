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


	CreatePipe(L"\\\\.\\pipe\\test");

    /*
    EyeDataFrame testFrame1;
    EyeDataFrame testFrame2;
    EyeDataFrame testFrame3;

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
    SendData(testFrame3);
    */
}

#if ISWINDOWS
void UPipeline::CreatePipe(const LPCWSTR pipeName)
{
    const int INSTANCES = 1;
    const int BUFFERINSIZE = 512;
    const int BUFFEROUTSIZE = 512;
    const int TIMEOUTTIME = 0;

    

    HANDLE pipe = CreateNamedPipe(
        pipeName,
        PIPE_ACCESS_OUTBOUND,
        PIPE_TYPE_MESSAGE,
        INSTANCES,
        BUFFERINSIZE,
        BUFFEROUTSIZE,
        TIMEOUTTIME,
        NULL //No security
    );

    ensureAlways(pipe == NULL || pipe == INVALID_HANDLE_VALUE);

    bool pipe_connected_successfully = ConnectNamedPipe(pipe, NULL);
    ensureAlways(pipe_connected_successfully);
    if (!pipe_connected_successfully) CloseHandle(pipe);

    Pipe = pipe;
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Pipe created!"));
}

void UPipeline::SendData(EyeDataFrame frame)
{
        DWORD bytesWritten = 0;
        bool result = WriteFile(
            Pipe,
            &frame,
            sizeof(frame),
            &bytesWritten,
            NULL
        );
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%d"), sizeof(frame)));
        ensureAlways(result);
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

