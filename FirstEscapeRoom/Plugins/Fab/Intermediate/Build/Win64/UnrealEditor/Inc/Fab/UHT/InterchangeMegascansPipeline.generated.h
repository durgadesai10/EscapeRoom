// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pipelines/InterchangeMegascansPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FAB_InterchangeMegascansPipeline_generated_h
#error "InterchangeMegascansPipeline.generated.h already included, missing '#pragma once' in InterchangeMegascansPipeline.h"
#endif
#define FAB_InterchangeMegascansPipeline_generated_h

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


template<> FAB_API UScriptStruct* StaticStruct<struct FMegascanMaterialPair>();

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMegascansMaterialParentSettings(); \
	friend struct Z_Construct_UClass_UMegascansMaterialParentSettings_Statics; \
public: \
	DECLARE_CLASS(UMegascansMaterialParentSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), NO_API) \
	DECLARE_SERIALIZER(UMegascansMaterialParentSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Fab");} \



#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMegascansMaterialParentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMegascansMaterialParentSettings(UMegascansMaterialParentSettings&&); \
	UMegascansMaterialParentSettings(const UMegascansMaterialParentSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMegascansMaterialParentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMegascansMaterialParentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMegascansMaterialParentSettings) \
	NO_API virtual ~UMegascansMaterialParentSettings();


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_88_PROLOG
#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAB_API UClass* StaticClass<class UMegascansMaterialParentSettings>();

#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMegascansPipeline(); \
	friend struct Z_Construct_UClass_UInterchangeMegascansPipeline_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMegascansPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fab"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMegascansPipeline)


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMegascansPipeline(UInterchangeMegascansPipeline&&); \
	UInterchangeMegascansPipeline(const UInterchangeMegascansPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMegascansPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMegascansPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMegascansPipeline) \
	NO_API virtual ~UInterchangeMegascansPipeline();


#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_98_PROLOG
#define FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAB_API UClass* StaticClass<class UInterchangeMegascansPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h


#define FOREACH_ENUM_EMEGASCANIMPORTTYPE(op) \
	op(EMegascanImportType::Model3D) \
	op(EMegascanImportType::Surface) \
	op(EMegascanImportType::Decal) \
	op(EMegascanImportType::Imperfection) \
	op(EMegascanImportType::Plant) 

enum class EMegascanImportType;
template<> struct TIsUEnumClass<EMegascanImportType> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EMegascanImportType>();

#define FOREACH_ENUM_EMEGASCANIMPORTTIER(op) \
	op(EMegascanImportTier::Invalid) \
	op(EMegascanImportTier::Raw) \
	op(EMegascanImportTier::High) \
	op(EMegascanImportTier::Medium) \
	op(EMegascanImportTier::Low) 

enum class EMegascanImportTier : int8;
template<> struct TIsUEnumClass<EMegascanImportTier> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EMegascanImportTier>();

#define FOREACH_ENUM_EMEGASCANMATERIALTYPE(op) \
	op(EMegascanMaterialType::Invalid) \
	op(EMegascanMaterialType::Base) \
	op(EMegascanMaterialType::BaseMasked) \
	op(EMegascanMaterialType::BaseFuzz) \
	op(EMegascanMaterialType::BaseTransmission) \
	op(EMegascanMaterialType::Glass) \
	op(EMegascanMaterialType::Surface) \
	op(EMegascanMaterialType::SurfaceMasked) \
	op(EMegascanMaterialType::SurfaceFuzz) \
	op(EMegascanMaterialType::SurfaceTransmission) \
	op(EMegascanMaterialType::Fabric) \
	op(EMegascanMaterialType::FabricMasked) \
	op(EMegascanMaterialType::Decal) \
	op(EMegascanMaterialType::Plant) \
	op(EMegascanMaterialType::PlantBillboard) 

enum class EMegascanMaterialType : int32;
template<> struct TIsUEnumClass<EMegascanMaterialType> { enum { Value = true }; };
template<> FAB_API UEnum* StaticEnum<EMegascanMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
