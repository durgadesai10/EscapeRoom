using UnrealBuildTool;

public class FirstEscapeRoomClientTarget : TargetRules
{
	public FirstEscapeRoomClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("FirstEscapeRoom");
	}
}
