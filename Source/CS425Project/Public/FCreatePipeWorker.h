// Fill out your copyright notice in the Description page of Project Settings.
// NOTE! Windows only currently.

#pragma once

#include <windows.h>

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

private:
	// Singleton for global access
	static FCreatePipeWorker* instance;

	// Pointer to thread this worker is using
	FRunnableThread* thread;

	// Local storage of pipe name
	LPCWSTR localPipeName;

	// Boolean to store completion status
	static bool isComplete;

	// Stores pipe handle for retrieval after completion
	static HANDLE Pipe;
};