// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FabSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FAB_FabSettings_generated_h
#error "FabSettings.generated.h already included, missing '#pragma once' in FabSettings.h"
#endif
#define FAB_FabSettings_generated_h

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabSettings(); \
	friend struct Z_Construct_UClass_UFabSettings_Statics; \
public: \
	DECLARE_CLASS(UFabSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), NO_API) \
	DECLARE_SERIALIZER(UFabSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFabSettings(UFabSettings&&); \
	UFabSettings(const UFabSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFabSettings) \
	NO_API virtual ~UFabSettings();


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_36_PROLOG
#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAB_API UClass* StaticClass<class UFabSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h


#define FOREACH_ENUM_EFABENVIRONMENT(op) \
	op(EFabEnvironment::Prod) \
	op(EFabEnvironment::Gamedev) \
	op(EFabEnvironment::Test) \
	op(EFabEnvironment::CustomUrl) 

enum class EFabEnvironment : uint8;
template<> struct TIsUEnumClass<EFabEnvironment> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EFabEnvironment>();

#define FOREACH_ENUM_EFABPREFERREDFORMATS(op) \
	op(EFabPreferredFormats::GLTF) \
	op(EFabPreferredFormats::FBX) 

enum class EFabPreferredFormats : uint8;
template<> struct TIsUEnumClass<EFabPreferredFormats> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EFabPreferredFormats>();

#define FOREACH_ENUM_EFABPREFERREDQUALITYTIER(op) \
	op(EFabPreferredQualityTier::Low) \
	op(EFabPreferredQualityTier::Medium) \
	op(EFabPreferredQualityTier::High) \
	op(EFabPreferredQualityTier::Raw) 

enum class EFabPreferredQualityTier : uint8;
template<> struct TIsUEnumClass<EFabPreferredQualityTier> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EFabPreferredQualityTier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
