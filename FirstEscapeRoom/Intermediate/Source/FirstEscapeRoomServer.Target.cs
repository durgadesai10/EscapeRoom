using UnrealBuildTool;

public class FirstEscapeRoomServerTarget : TargetRules
{
	public FirstEscapeRoomServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("FirstEscapeRoom");
	}
}
