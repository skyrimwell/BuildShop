// Copyright BuildStore Team. All Rights Reserved.

using UnrealBuildTool;

public class BuildStore : ModuleRules
{
	public BuildStore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"EngineSettings",
			"InputCore",
			"EnhancedInput",
			"UMG"

			// "Slate",
			// "SlateCore"

		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

	}
}
