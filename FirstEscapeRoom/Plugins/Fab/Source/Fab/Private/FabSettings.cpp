// Copyright Epic Games, Inc. All Rights Reserved.

#include "FabSettings.h"

#include "FabAuthentication.h"
#include "FabBrowser.h"
#include "Misc/Paths.h"
#include "UObject/UnrealType.h"

UFabSettings::UFabSettings()
{
	#if WITH_EDITOR
	for (TFieldIterator<FProperty> It(GetClass()); It; ++It)
	{
		FProperty* Property = *It;
		if (Property && Property->GetMetaData(TEXT("DevOnly")).ToBool())
		{
			Property->SetMetaData(TEXT("Category"), TEXT("HiddenProperties"));
		}
	}
	#endif
}

void UFabSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		if (PropertyChangedEvent.GetMemberPropertyName() == GET_MEMBER_NAME_CHECKED(UFabSettings, CacheDirectoryPath))
		{
			if (!FPaths::DirectoryExists(CacheDirectoryPath.Path) || FPaths::IsRelative(CacheDirectoryPath.Path))
			{
				CacheDirectoryPath = FDirectoryPath { FPlatformProcess::UserTempDir() / FString("FabLibrary") };
			}
		}
		
		SaveConfig();
		
		if (PropertyChangedEvent.GetMemberPropertyName() == GET_MEMBER_NAME_CHECKED(UFabSettings, Environment))
		{
			FabAuthentication::DeletePersistentAuth();
			FabAuthentication::Init();
			if (Environment != EFabEnvironment::CustomUrl)
			{
				FFabBrowser::OpenURL();
			}
		}
		else if (PropertyChangedEvent.GetMemberPropertyName() == GET_MEMBER_NAME_CHECKED(UFabSettings, CustomUrl))
		{
			if (Environment == EFabEnvironment::CustomUrl)
			{
				FFabBrowser::OpenURL();
			}
		}
	}
}
