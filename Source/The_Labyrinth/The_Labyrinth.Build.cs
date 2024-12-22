// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class The_Labyrinth : ModuleRules
{
	public The_Labyrinth(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
