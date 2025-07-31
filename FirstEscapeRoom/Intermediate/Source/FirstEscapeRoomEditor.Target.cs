using UnrealBuildTool;

public class FirstEscapeRoomEditorTarget : TargetRules
{
	public FirstEscapeRoomEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("FirstEscapeRoom");
	}
}
