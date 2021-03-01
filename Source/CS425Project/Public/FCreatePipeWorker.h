// Fill out your copyright notice in the Description page of Project Settings.
// NOTE! Windows only currently.

#pragma once

#include <windows.h>
#include "EyeFrameData.h"
#include <queue>

#include "CoreMinimal.h"
/**
 * 
 */
class CS425PROJECT_API FCreatePipeWorker : public FRunnable
{
public:
	FCreatePipeWorker(const LPCWSTR pipeName);
	~FCreatePipeWorker();

	// Getter function for singleton
	static FCreatePipeWorker* getInstance();

	virtual uint32 Run() override;

	static bool CheckCompletion();

	static HANDLE RetrievePipeHandle();

	static void SendData(EyeFrameData frame);


private:
	// Singleton for global access
	static FCreatePipeWorker* instance;

	// Boolean to store status of pipe
	static bool isOpen;

	// Stores pipe handle for retrieval after completion
	static HANDLE Pipe;

	// Pointer to thread this worker is using
	FRunnableThread* thread;

	// Local storage of pipe name
	LPCWSTR localPipeName;

	// The buffer used to send data
	static std::queue<EyeFrameData> localBuffer;

	// Function which opens the pipe, should only be called once
	bool openPipe();

	// Function which actually sends the data, should only be called inside the thread
	void sendFrame(EyeFrameData frame);
};