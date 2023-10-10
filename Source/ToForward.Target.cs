

using UnrealBuildTool;
using System.Collections.Generic;

public class ToForwardTarget : TargetRules
{
	public ToForwardTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ToForward" } );
	}
}
