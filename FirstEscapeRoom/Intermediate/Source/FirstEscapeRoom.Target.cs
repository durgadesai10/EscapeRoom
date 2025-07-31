using UnrealBuildTool;

public class FirstEscapeRoomTarget : TargetRules
{
	public FirstEscapeRoomTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("FirstEscapeRoom");
	}
}
