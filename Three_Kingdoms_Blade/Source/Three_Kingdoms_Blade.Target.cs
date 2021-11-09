// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Three_Kingdoms_BladeTarget : TargetRules
{
	public Three_Kingdoms_BladeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Three_Kingdoms_Blade");
	}
}
