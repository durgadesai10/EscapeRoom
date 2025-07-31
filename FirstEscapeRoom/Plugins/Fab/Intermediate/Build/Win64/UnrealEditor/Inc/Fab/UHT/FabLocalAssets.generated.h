// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/FabLocalAssets.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FAB_FabLocalAssets_generated_h
#error "FabLocalAssets.generated.h already included, missing '#pragma once' in FabLocalAssets.h"
#endif
#define FAB_FabLocalAssets_generated_h

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabLocalAssets(); \
	friend struct Z_Construct_UClass_UFabLocalAssets_Statics; \
public: \
	DECLARE_CLASS(UFabLocalAssets, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), FAB_API) \
	DECLARE_SERIALIZER(UFabLocalAssets) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FAB_API UFabLocalAssets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFabLocalAssets(UFabLocalAssets&&); \
	UFabLocalAssets(const UFabLocalAssets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FAB_API, UFabLocalAssets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabLocalAssets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFabLocalAssets) \
	FAB_API virtual ~UFabLocalAssets();


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_14_PROLOG
#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAB_API UClass* StaticClass<class UFabLocalAssets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
