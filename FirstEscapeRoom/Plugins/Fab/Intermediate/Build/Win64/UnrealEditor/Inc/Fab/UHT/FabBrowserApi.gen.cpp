// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fab/Private/FabBrowserApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabBrowserApi() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FAB_API UClass* Z_Construct_UClass_UFabBrowserApi();
FAB_API UClass* Z_Construct_UClass_UFabBrowserApi_NoRegister();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabApiVersion();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetadata();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabFrontendSettings();
UPackage* Z_Construct_UPackage__Script_Fab();
// End Cross Module References

// Begin ScriptStruct FFabAssetMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FabAssetMetadata;
class UScriptStruct* FFabAssetMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FabAssetMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FabAssetMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabAssetMetadata, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabAssetMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_FabAssetMetadata.OuterSingleton;
}
template<> FAB_API UScriptStruct* StaticStruct<FFabAssetMetadata>()
{
	return FFabAssetMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFabAssetMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListingType_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsQuixel_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNamespace_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionPointBaseUrls_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ListingType;
	static void NewProp_IsQuixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsQuixel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNamespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DistributionPointBaseUrls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DistributionPointBaseUrls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabAssetMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_ListingType = { "ListingType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, ListingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListingType_MetaData), NewProp_ListingType_MetaData) };
void Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel_SetBit(void* Obj)
{
	((FFabAssetMetadata*)Obj)->IsQuixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel = { "IsQuixel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFabAssetMetadata), &Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsQuixel_MetaData), NewProp_IsQuixel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetNamespace = { "AssetNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNamespace_MetaData), NewProp_AssetNamespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls_Inner = { "DistributionPointBaseUrls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls = { "DistributionPointBaseUrls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, DistributionPointBaseUrls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionPointBaseUrls_MetaData), NewProp_DistributionPointBaseUrls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_ListingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabAssetMetadata",
	Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers),
	sizeof(FFabAssetMetadata),
	alignof(FFabAssetMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_FabAssetMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FabAssetMetadata.InnerSingleton, Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FabAssetMetadata.InnerSingleton;
}
// End ScriptStruct FFabAssetMetadata

// Begin ScriptStruct FFabApiVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FabApiVersion;
class UScriptStruct* FFabApiVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FabApiVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FabApiVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabApiVersion, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabApiVersion"));
	}
	return Z_Registration_Info_UScriptStruct_FabApiVersion.OuterSingleton;
}
template<> FAB_API UScriptStruct* StaticStruct<FFabApiVersion>()
{
	return FFabApiVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFabApiVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ue_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Api_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Api;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabApiVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Ue = { "Ue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, Ue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ue_MetaData), NewProp_Ue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, Api), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Api_MetaData), NewProp_Api_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_PluginVersion = { "PluginVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, PluginVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersion_MetaData), NewProp_PluginVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Ue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Api,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_PluginVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_Platform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabApiVersion",
	Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers),
	sizeof(FFabApiVersion),
	alignof(FFabApiVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabApiVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabApiVersion()
{
	if (!Z_Registration_Info_UScriptStruct_FabApiVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FabApiVersion.InnerSingleton, Z_Construct_UScriptStruct_FFabApiVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FabApiVersion.InnerSingleton;
}
// End ScriptStruct FFabApiVersion

// Begin ScriptStruct FFabFrontendSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FabFrontendSettings;
class UScriptStruct* FFabFrontendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FabFrontendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FabFrontendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabFrontendSettings, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabFrontendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FabFrontendSettings.OuterSingleton;
}
template<> FAB_API UScriptStruct* StaticStruct<FFabFrontendSettings>()
{
	return FFabFrontendSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFabFrontendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFormat_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredQuality_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredFormat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabFrontendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_PreferredFormat = { "PreferredFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabFrontendSettings, PreferredFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredFormat_MetaData), NewProp_PreferredFormat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_PreferredQuality = { "PreferredQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabFrontendSettings, PreferredQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredQuality_MetaData), NewProp_PreferredQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_PreferredFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_PreferredQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabFrontendSettings",
	Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers),
	sizeof(FFabFrontendSettings),
	alignof(FFabFrontendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabFrontendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FabFrontendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FabFrontendSettings.InnerSingleton, Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FabFrontendSettings.InnerSingleton;
}
// End ScriptStruct FFabFrontendSettings

// Begin Class UFabBrowserApi Function AddToProject
struct Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics
{
	struct FabBrowserApi_eventAddToProject_Parms
	{
		FString DownloadUrl;
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventAddToProject_Parms, DownloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadUrl_MetaData), NewProp_DownloadUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventAddToProject_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2333802033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_DownloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "AddToProject", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FabBrowserApi_eventAddToProject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FabBrowserApi_eventAddToProject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_AddToProject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execAddToProject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DownloadUrl);
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToProject(Z_Param_DownloadUrl,Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function AddToProject

// Begin Class UFabBrowserApi Function CopyToClipboard
struct Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics
{
	struct FabBrowserApi_eventCopyToClipboard_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventCopyToClipboard_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "CopyToClipboard", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FabBrowserApi_eventCopyToClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FabBrowserApi_eventCopyToClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execCopyToClipboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyToClipboard(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function CopyToClipboard

// Begin Class UFabBrowserApi Function DragStart
struct Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics
{
	struct FabBrowserApi_eventDragStart_Parms
	{
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventDragStart_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2333802033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "DragStart", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FabBrowserApi_eventDragStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FabBrowserApi_eventDragStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_DragStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execDragStart)
{
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DragStart(Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function DragStart

// Begin Class UFabBrowserApi Function GetApiVersion
struct Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics
{
	struct FabBrowserApi_eventGetApiVersion_Parms
	{
		FFabApiVersion ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetApiVersion_Parms, ReturnValue), Z_Construct_UScriptStruct_FFabApiVersion, METADATA_PARAMS(0, nullptr) }; // 366059882
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetApiVersion", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FabBrowserApi_eventGetApiVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FabBrowserApi_eventGetApiVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetApiVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetApiVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFabApiVersion*)Z_Param__Result=UFabBrowserApi::GetApiVersion();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function GetApiVersion

// Begin Class UFabBrowserApi Function GetAuthToken
struct Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics
{
	struct FabBrowserApi_eventGetAuthToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetAuthToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FabBrowserApi_eventGetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FabBrowserApi_eventGetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAuthToken();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function GetAuthToken

// Begin Class UFabBrowserApi Function GetRefreshToken
struct Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics
{
	struct FabBrowserApi_eventGetRefreshToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetRefreshToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetRefreshToken", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FabBrowserApi_eventGetRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FabBrowserApi_eventGetRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetRefreshToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRefreshToken();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function GetRefreshToken

// Begin Class UFabBrowserApi Function GetSettings
struct Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics
{
	struct FabBrowserApi_eventGetSettings_Parms
	{
		FFabFrontendSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FFabFrontendSettings, METADATA_PARAMS(0, nullptr) }; // 2931594590
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FabBrowserApi_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FabBrowserApi_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFabFrontendSettings*)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function GetSettings

// Begin Class UFabBrowserApi Function GetUrl
struct Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics
{
	struct FabBrowserApi_eventGetUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetUrl", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FabBrowserApi_eventGetUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FabBrowserApi_eventGetUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUrl();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function GetUrl

// Begin Class UFabBrowserApi Function Login
struct Z_Construct_UFunction_UFabBrowserApi_Login_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "Login", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_Login_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFabBrowserApi_Login()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_Login_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execLogin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Login();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function Login

// Begin Class UFabBrowserApi Function Logout
struct Z_Construct_UFunction_UFabBrowserApi_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "Logout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFabBrowserApi_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execLogout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function Logout

// Begin Class UFabBrowserApi Function OnDragInfoFailure
struct Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics
{
	struct FabBrowserApi_eventOnDragInfoFailure_Parms
	{
		FString AssetId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoFailure_Parms, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::NewProp_AssetId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OnDragInfoFailure", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FabBrowserApi_eventOnDragInfoFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FabBrowserApi_eventOnDragInfoFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOnDragInfoFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragInfoFailure(Z_Param_AssetId);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function OnDragInfoFailure

// Begin Class UFabBrowserApi Function OnDragInfoSuccess
struct Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics
{
	struct FabBrowserApi_eventOnDragInfoSuccess_Parms
	{
		FString DownloadUrl;
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoSuccess_Parms, DownloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadUrl_MetaData), NewProp_DownloadUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoSuccess_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2333802033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_DownloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OnDragInfoSuccess", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FabBrowserApi_eventOnDragInfoSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FabBrowserApi_eventOnDragInfoSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOnDragInfoSuccess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DownloadUrl);
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragInfoSuccess(Z_Param_DownloadUrl,Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function OnDragInfoSuccess

// Begin Class UFabBrowserApi Function OpenPluginSettings
struct Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OpenPluginSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOpenPluginSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenPluginSettings();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function OpenPluginSettings

// Begin Class UFabBrowserApi Function OpenUrlInBrowser
struct Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics
{
	struct FabBrowserApi_eventOpenUrlInBrowser_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOpenUrlInBrowser_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OpenUrlInBrowser", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FabBrowserApi_eventOpenUrlInBrowser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FabBrowserApi_eventOpenUrlInBrowser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOpenUrlInBrowser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenUrlInBrowser(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function OpenUrlInBrowser

// Begin Class UFabBrowserApi Function PluginOpened
struct Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "PluginOpened", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFabBrowserApi_PluginOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execPluginOpened)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PluginOpened();
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function PluginOpened

// Begin Class UFabBrowserApi Function SetPreferredQualityTier
struct Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics
{
	struct FabBrowserApi_eventSetPreferredQualityTier_Parms
	{
		FString PreferredQuality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::NewProp_PreferredQuality = { "PreferredQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventSetPreferredQualityTier_Parms, PreferredQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredQuality_MetaData), NewProp_PreferredQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::NewProp_PreferredQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "SetPreferredQualityTier", nullptr, nullptr, Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FabBrowserApi_eventSetPreferredQualityTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FabBrowserApi_eventSetPreferredQualityTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execSetPreferredQualityTier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PreferredQuality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreferredQualityTier(Z_Param_PreferredQuality);
	P_NATIVE_END;
}
// End Class UFabBrowserApi Function SetPreferredQualityTier

// Begin Class UFabBrowserApi
void UFabBrowserApi::StaticRegisterNativesUFabBrowserApi()
{
	UClass* Class = UFabBrowserApi::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToProject", &UFabBrowserApi::execAddToProject },
		{ "CopyToClipboard", &UFabBrowserApi::execCopyToClipboard },
		{ "DragStart", &UFabBrowserApi::execDragStart },
		{ "GetApiVersion", &UFabBrowserApi::execGetApiVersion },
		{ "GetAuthToken", &UFabBrowserApi::execGetAuthToken },
		{ "GetRefreshToken", &UFabBrowserApi::execGetRefreshToken },
		{ "GetSettings", &UFabBrowserApi::execGetSettings },
		{ "GetUrl", &UFabBrowserApi::execGetUrl },
		{ "Login", &UFabBrowserApi::execLogin },
		{ "Logout", &UFabBrowserApi::execLogout },
		{ "OnDragInfoFailure", &UFabBrowserApi::execOnDragInfoFailure },
		{ "OnDragInfoSuccess", &UFabBrowserApi::execOnDragInfoSuccess },
		{ "OpenPluginSettings", &UFabBrowserApi::execOpenPluginSettings },
		{ "OpenUrlInBrowser", &UFabBrowserApi::execOpenUrlInBrowser },
		{ "PluginOpened", &UFabBrowserApi::execPluginOpened },
		{ "SetPreferredQualityTier", &UFabBrowserApi::execSetPreferredQualityTier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabBrowserApi);
UClass* Z_Construct_UClass_UFabBrowserApi_NoRegister()
{
	return UFabBrowserApi::StaticClass();
}
struct Z_Construct_UClass_UFabBrowserApi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabBrowserApi.h" },
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFabBrowserApi_AddToProject, "AddToProject" }, // 2197615013
		{ &Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard, "CopyToClipboard" }, // 3035046340
		{ &Z_Construct_UFunction_UFabBrowserApi_DragStart, "DragStart" }, // 1812559863
		{ &Z_Construct_UFunction_UFabBrowserApi_GetApiVersion, "GetApiVersion" }, // 1332020947
		{ &Z_Construct_UFunction_UFabBrowserApi_GetAuthToken, "GetAuthToken" }, // 3939188780
		{ &Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken, "GetRefreshToken" }, // 3120481974
		{ &Z_Construct_UFunction_UFabBrowserApi_GetSettings, "GetSettings" }, // 318273755
		{ &Z_Construct_UFunction_UFabBrowserApi_GetUrl, "GetUrl" }, // 2635141289
		{ &Z_Construct_UFunction_UFabBrowserApi_Login, "Login" }, // 2271994196
		{ &Z_Construct_UFunction_UFabBrowserApi_Logout, "Logout" }, // 1404491081
		{ &Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure, "OnDragInfoFailure" }, // 530218376
		{ &Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess, "OnDragInfoSuccess" }, // 2027149960
		{ &Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings, "OpenPluginSettings" }, // 142657752
		{ &Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser, "OpenUrlInBrowser" }, // 1927317115
		{ &Z_Construct_UFunction_UFabBrowserApi_PluginOpened, "PluginOpened" }, // 3338765956
		{ &Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier, "SetPreferredQualityTier" }, // 2790536862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabBrowserApi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabBrowserApi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabBrowserApi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabBrowserApi_Statics::ClassParams = {
	&UFabBrowserApi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabBrowserApi_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabBrowserApi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabBrowserApi()
{
	if (!Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton, Z_Construct_UClass_UFabBrowserApi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UFabBrowserApi>()
{
	return UFabBrowserApi::StaticClass();
}
UFabBrowserApi::UFabBrowserApi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabBrowserApi);
UFabBrowserApi::~UFabBrowserApi() {}
// End Class UFabBrowserApi

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFabAssetMetadata::StaticStruct, Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewStructOps, TEXT("FabAssetMetadata"), &Z_Registration_Info_UScriptStruct_FabAssetMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabAssetMetadata), 2333802033U) },
		{ FFabApiVersion::StaticStruct, Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewStructOps, TEXT("FabApiVersion"), &Z_Registration_Info_UScriptStruct_FabApiVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabApiVersion), 366059882U) },
		{ FFabFrontendSettings::StaticStruct, Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewStructOps, TEXT("FabFrontendSettings"), &Z_Registration_Info_UScriptStruct_FabFrontendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabFrontendSettings), 2931594590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabBrowserApi, UFabBrowserApi::StaticClass, TEXT("UFabBrowserApi"), &Z_Registration_Info_UClass_UFabBrowserApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabBrowserApi), 1648851361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_2292882135(TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
