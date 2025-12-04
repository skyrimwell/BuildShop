// Copyright BuildStore Team. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class BuildStoreEditorTarget : TargetRules
{
	public BuildStoreEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
		ExtraModuleNames.Add("BuildStore");
	}
}
