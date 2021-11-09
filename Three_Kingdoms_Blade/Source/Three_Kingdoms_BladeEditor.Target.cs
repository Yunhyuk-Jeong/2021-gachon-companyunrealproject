// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Three_Kingdoms_BladeEditorTarget : TargetRules
{
	public Three_Kingdoms_BladeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Three_Kingdoms_Blade");
	}
}
