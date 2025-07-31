// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fab/Private/FabAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabAuthentication() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FAB_API UClass* Z_Construct_UClass_UEosConstants();
FAB_API UClass* Z_Construct_UClass_UEosConstants_NoRegister();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsGameDev();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsProd();
UPackage* Z_Construct_UPackage__Script_Fab();
// End Cross Module References

// Begin ScriptStruct FEosConstantsGameDev
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EosConstantsGameDev;
class UScriptStruct* FEosConstantsGameDev::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EosConstantsGameDev.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EosConstantsGameDev.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEosConstantsGameDev, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EosConstantsGameDev"));
	}
	return Z_Registration_Info_UScriptStruct_EosConstantsGameDev.OuterSingleton;
}
template<> FAB_API UScriptStruct* StaticStruct<FEosConstantsGameDev>()
{
	return FEosConstantsGameDev::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Comment", "/** The product id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The product id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Comment", "/** The sandbox id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The sandbox id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Comment", "/** The deployment id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The deployment id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsId_MetaData[] = {
		{ "Comment", "/** Client id of the service permissions entry, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client id of the service permissions entry, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsSecret_MetaData[] = {
		{ "Comment", "/** Client secret for accessing the set of permissions, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client secret for accessing the set of permissions, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
		{ "Comment", "/** Game name */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Game name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[] = {
		{ "Comment", "/** Encryption key. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Encryption key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductVersion_MetaData[] = {
		{ "Comment", "/** Product Version. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Product Version." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEosConstantsGameDev>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsId = { "ClientCredentialsId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ClientCredentialsId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsId_MetaData), NewProp_ClientCredentialsId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsSecret = { "ClientCredentialsSecret", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ClientCredentialsSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsSecret_MetaData), NewProp_ClientCredentialsSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, GameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameName_MetaData), NewProp_GameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, EncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptionKey_MetaData), NewProp_EncryptionKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductVersion = { "ProductVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ProductVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductVersion_MetaData), NewProp_ProductVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_GameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_EncryptionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"EosConstantsGameDev",
	Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers),
	sizeof(FEosConstantsGameDev),
	alignof(FEosConstantsGameDev),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsGameDev()
{
	if (!Z_Registration_Info_UScriptStruct_EosConstantsGameDev.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EosConstantsGameDev.InnerSingleton, Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EosConstantsGameDev.InnerSingleton;
}
// End ScriptStruct FEosConstantsGameDev

// Begin ScriptStruct FEosConstantsProd
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EosConstantsProd;
class UScriptStruct* FEosConstantsProd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EosConstantsProd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EosConstantsProd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEosConstantsProd, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EosConstantsProd"));
	}
	return Z_Registration_Info_UScriptStruct_EosConstantsProd.OuterSingleton;
}
template<> FAB_API UScriptStruct* StaticStruct<FEosConstantsProd>()
{
	return FEosConstantsProd::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEosConstantsProd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Comment", "/** The product id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The product id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Comment", "/** The sandbox id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The sandbox id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Comment", "/** The deployment id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The deployment id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsId_MetaData[] = {
		{ "Comment", "/** Client id of the service permissions entry, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client id of the service permissions entry, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsSecret_MetaData[] = {
		{ "Comment", "/** Client secret for accessing the set of permissions, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client secret for accessing the set of permissions, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
		{ "Comment", "/** Game name */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Game name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[] = {
		{ "Comment", "/** Encryption key. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Encryption key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductVersion_MetaData[] = {
		{ "Comment", "/** Product Version. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Product Version." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEosConstantsProd>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsId = { "ClientCredentialsId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ClientCredentialsId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsId_MetaData), NewProp_ClientCredentialsId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsSecret = { "ClientCredentialsSecret", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ClientCredentialsSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsSecret_MetaData), NewProp_ClientCredentialsSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, GameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameName_MetaData), NewProp_GameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, EncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptionKey_MetaData), NewProp_EncryptionKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductVersion = { "ProductVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ProductVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductVersion_MetaData), NewProp_ProductVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_GameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_EncryptionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"EosConstantsProd",
	Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers),
	sizeof(FEosConstantsProd),
	alignof(FEosConstantsProd),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEosConstantsProd_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsProd()
{
	if (!Z_Registration_Info_UScriptStruct_EosConstantsProd.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EosConstantsProd.InnerSingleton, Z_Construct_UScriptStruct_FEosConstantsProd_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EosConstantsProd.InnerSingleton;
}
// End ScriptStruct FEosConstantsProd

// Begin Class UEosConstants
void UEosConstants::StaticRegisterNativesUEosConstants()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEosConstants);
UClass* Z_Construct_UClass_UEosConstants_NoRegister()
{
	return UEosConstants::StaticClass();
}
struct Z_Construct_UClass_UEosConstants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabAuthentication.h" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDev_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prod_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameDev;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEosConstants>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEosConstants_Statics::NewProp_GameDev = { "GameDev", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEosConstants, GameDev), Z_Construct_UScriptStruct_FEosConstantsGameDev, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDev_MetaData), NewProp_GameDev_MetaData) }; // 3364001389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEosConstants_Statics::NewProp_Prod = { "Prod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEosConstants, Prod), Z_Construct_UScriptStruct_FEosConstantsProd, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prod_MetaData), NewProp_Prod_MetaData) }; // 4077422909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEosConstants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEosConstants_Statics::NewProp_GameDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEosConstants_Statics::NewProp_Prod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEosConstants_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEosConstants_Statics::ClassParams = {
	&UEosConstants::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEosConstants_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::Class_MetaDataParams), Z_Construct_UClass_UEosConstants_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEosConstants()
{
	if (!Z_Registration_Info_UClass_UEosConstants.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEosConstants.OuterSingleton, Z_Construct_UClass_UEosConstants_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEosConstants.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UEosConstants>()
{
	return UEosConstants::StaticClass();
}
UEosConstants::UEosConstants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEosConstants);
UEosConstants::~UEosConstants() {}
// End Class UEosConstants

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEosConstantsGameDev::StaticStruct, Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewStructOps, TEXT("EosConstantsGameDev"), &Z_Registration_Info_UScriptStruct_EosConstantsGameDev, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEosConstantsGameDev), 3364001389U) },
		{ FEosConstantsProd::StaticStruct, Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewStructOps, TEXT("EosConstantsProd"), &Z_Registration_Info_UScriptStruct_EosConstantsProd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEosConstantsProd), 4077422909U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEosConstants, UEosConstants::StaticClass, TEXT("UEosConstants"), &Z_Registration_Info_UClass_UEosConstants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEosConstants), 3222504096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_707497031(TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
