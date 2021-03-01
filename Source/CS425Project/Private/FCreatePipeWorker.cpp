// Fill out your copyright notice in the Description page of Project Settings.


#include "FCreatePipeWorker.h"

FCreatePipeWorker* FCreatePipeWorker::instance;
bool FCreatePipeWorker::isOpen;
HANDLE FCreatePipeWorker::Pipe;
std::queue<EyeFrameData> FCreatePipeWorker::localBuffer;


FCreatePipeWorker::~FCreatePipeWorker()
{

}

FCreatePipeWorker::FCreatePipeWorker(const LPCWSTR pipeName)
{
    instance = this;
	localPipeName = pipeName;
    isOpen = false;
}

FCreatePipeWorker* FCreatePipeWorker::getInstance()
{
	return instance;
}


uint32 FCreatePipeWorker::Run()
{
    while (true) {
        if (!isOpen) {
            isOpen = openPipe();
        }
        else {
            if (!localBuffer.empty()) {
                sendFrame(localBuffer.front());
                localBuffer.pop();
            }
        }
    }
    return 0;
}


bool FCreatePipeWorker::CheckCompletion()
{
	return isOpen;
}

HANDLE FCreatePipeWorker::RetrievePipeHandle()
{
    return Pipe;
}

void FCreatePipeWorker::SendData(EyeFrameData frame)
{
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Sending data!"));
    localBuffer.push(frame);
}

// TODO: Add code to handle failed opening.
bool FCreatePipeWorker::openPipe()
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

    return true;
}

void FCreatePipeWorker::sendFrame(EyeFrameData frame)
{
    if ( isOpen ) {
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
    else {
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Voiding data!")));
    }
}