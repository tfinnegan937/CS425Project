//========= Copyright 2019-2020, HTC Corporation. All rights reserved. ===========

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSRanipalLip, Log, All);

class FSRanipalLipModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
