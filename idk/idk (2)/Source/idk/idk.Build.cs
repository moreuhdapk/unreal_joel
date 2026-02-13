// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class idk : ModuleRules
{
	public idk(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"idk",
			"idk/Variant_Platforming",
			"idk/Variant_Platforming/Animation",
			"idk/Variant_Combat",
			"idk/Variant_Combat/AI",
			"idk/Variant_Combat/Animation",
			"idk/Variant_Combat/Gameplay",
			"idk/Variant_Combat/Interfaces",
			"idk/Variant_Combat/UI",
			"idk/Variant_SideScrolling",
			"idk/Variant_SideScrolling/AI",
			"idk/Variant_SideScrolling/Gameplay",
			"idk/Variant_SideScrolling/Interfaces",
			"idk/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
