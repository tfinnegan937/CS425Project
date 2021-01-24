// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CS425Project : ModuleRules
{
	public CS425Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Networking", "Sockets" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		//THE BELOW THREE LINES ARE NECESSARY TO USE THE BOOST LIBRARY
		PublicDependencyModuleNames.Add("PCL");
		bUseRTTI = true;
		bEnableExceptions = true;
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
