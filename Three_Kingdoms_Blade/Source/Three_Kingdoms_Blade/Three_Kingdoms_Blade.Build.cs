// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Three_Kingdoms_Blade : ModuleRules
{
	public Three_Kingdoms_Blade(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
