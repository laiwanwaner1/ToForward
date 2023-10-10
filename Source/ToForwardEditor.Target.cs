

using UnrealBuildTool;
using System.Collections.Generic;

public class ToForwardEditorTarget : TargetRules
{
	public ToForwardEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ToForward" } );
	}
}
