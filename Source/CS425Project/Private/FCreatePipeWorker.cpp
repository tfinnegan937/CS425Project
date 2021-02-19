// Fill out your copyright notice in the Description page of Project Settings.


#include "FCreatePipeWorker.h"

FCreatePipeWorker* FCreatePipeWorker::instance;
bool FCreatePipeWorker::isComplete;
HANDLE FCreatePipeWorker::Pipe;


FCreatePipeWorker::~FCreatePipeWorker()
{

}

FCreatePipeWorker::FCreatePipeWorker(const LPCWSTR pipeName)
{
    instance = this;
	localPipeName = pipeName;
    isComplete = false;
}

FCreatePipeWorker* FCreatePipeWorker::getInstance()
{
	return instance;
}

uint32 FCreatePipeWorker::Run()
{
    const int INSTANCES = 1;
    const int BUFFERINSIZE = 512;
    const int BUFFEROUTSIZE = 512;
    const int TIMEOUTTIME = 0;

    HANDLE pipe = CreateNamedPipe(
        localPipeName,
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

    isComplete = true;
    return 0;
}


bool FCreatePipeWorker::CheckCompletion()
{
	return isComplete;
}

HANDLE FCreatePipeWorker::RetrievePipeHandle()
{
    return Pipe;
}