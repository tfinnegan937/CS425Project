// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System;
using System.IO;
public class CS425Project : ModuleRules
{
	public CS425Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Networking", "Sockets", "EyeTracker"});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		//THE BELOW THREE LINES ARE NECESSARY TO USE THE BOOST LIBRARY
		bUseRTTI = true;
		bEnableExceptions = true;
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../../", "shared_include"));
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
