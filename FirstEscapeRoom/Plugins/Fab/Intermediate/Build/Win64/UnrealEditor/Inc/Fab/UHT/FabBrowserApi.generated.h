// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FabBrowserApi.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFabApiVersion;
struct FFabAssetMetadata;
struct FFabFrontendSettings;
#ifdef FAB_FabBrowserApi_generated_h
#error "FabBrowserApi.generated.h already included, missing '#pragma once' in FabBrowserApi.h"
#endif
#define FAB_FabBrowserApi_generated_h

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFabAssetMetadata_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


template<> FAB_API UScriptStruct* StaticStruct<struct FFabAssetMetadata>();

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFabApiVersion_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


template<> FAB_API UScriptStruct* StaticStruct<struct FFabApiVersion>();

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFabFrontendSettings_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


template<> FAB_API UScriptStruct* StaticStruct<struct FFabFrontendSettings>();

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execPluginOpened); \
	DECLARE_FUNCTION(execCopyToClipboard); \
	DECLARE_FUNCTION(execOpenUrlInBrowser); \
	DECLARE_FUNCTION(execGetApiVersion); \
	DECLARE_FUNCTION(execSetPreferredQualityTier); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execOpenPluginSettings); \
	DECLARE_FUNCTION(execGetRefreshToken); \
	DECLARE_FUNCTION(execGetAuthToken); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execOnDragInfoFailure); \
	DECLARE_FUNCTION(execOnDragInfoSuccess); \
	DECLARE_FUNCTION(execDragStart); \
	DECLARE_FUNCTION(execAddToProject);


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabBrowserApi(); \
	friend struct Z_Construct_UClass_UFabBrowserApi_Statics; \
public: \
	DECLARE_CLASS(UFabBrowserApi, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fab"), NO_API) \
	DECLARE_SERIALIZER(UFabBrowserApi)


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFabBrowserApi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFabBrowserApi(UFabBrowserApi&&); \
	UFabBrowserApi(const UFabBrowserApi&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabBrowserApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabBrowserApi); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFabBrowserApi) \
	NO_API virtual ~UFabBrowserApi();


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_68_PROLOG
#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAB_API UClass* StaticClass<class UFabBrowserApi>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
