// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fab/Private/Importers/ActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawner() {}

// Begin Cross Module References
FAB_API UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_Fab();
// End Cross Module References

// Begin Class UFabPlaceholderSpawner
void UFabPlaceholderSpawner::StaticRegisterNativesUFabPlaceholderSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabPlaceholderSpawner);
UClass* Z_Construct_UClass_UFabPlaceholderSpawner_NoRegister()
{
	return UFabPlaceholderSpawner::StaticClass();
}
struct Z_Construct_UClass_UFabPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Private/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabPlaceholderSpawner_Statics::ClassParams = {
	&UFabPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabPlaceholderSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UFabPlaceholderSpawner>()
{
	return UFabPlaceholderSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabPlaceholderSpawner);
UFabPlaceholderSpawner::~UFabPlaceholderSpawner() {}
// End Class UFabPlaceholderSpawner

// Begin Class UFabStaticMeshPlaceholderSpawner
void UFabStaticMeshPlaceholderSpawner::StaticRegisterNativesUFabStaticMeshPlaceholderSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabStaticMeshPlaceholderSpawner);
UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_NoRegister()
{
	return UFabStaticMeshPlaceholderSpawner::StaticClass();
}
struct Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Private/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabStaticMeshPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::ClassParams = {
	&UFabStaticMeshPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UFabStaticMeshPlaceholderSpawner>()
{
	return UFabStaticMeshPlaceholderSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabStaticMeshPlaceholderSpawner);
UFabStaticMeshPlaceholderSpawner::~UFabStaticMeshPlaceholderSpawner() {}
// End Class UFabStaticMeshPlaceholderSpawner

// Begin Class UFabSkeletalMeshPlaceholderSpawner
void UFabSkeletalMeshPlaceholderSpawner::StaticRegisterNativesUFabSkeletalMeshPlaceholderSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabSkeletalMeshPlaceholderSpawner);
UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_NoRegister()
{
	return UFabSkeletalMeshPlaceholderSpawner::StaticClass();
}
struct Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Private/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabSkeletalMeshPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::ClassParams = {
	&UFabSkeletalMeshPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UFabSkeletalMeshPlaceholderSpawner>()
{
	return UFabSkeletalMeshPlaceholderSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabSkeletalMeshPlaceholderSpawner);
UFabSkeletalMeshPlaceholderSpawner::~UFabSkeletalMeshPlaceholderSpawner() {}
// End Class UFabSkeletalMeshPlaceholderSpawner

// Begin Class UFabDecalPlaceholderSpawner
void UFabDecalPlaceholderSpawner::StaticRegisterNativesUFabDecalPlaceholderSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabDecalPlaceholderSpawner);
UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner_NoRegister()
{
	return UFabDecalPlaceholderSpawner::StaticClass();
}
struct Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Private/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabDecalPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::ClassParams = {
	&UFabDecalPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton;
}
template<> FAB_API UClass* StaticClass<UFabDecalPlaceholderSpawner>()
{
	return UFabDecalPlaceholderSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabDecalPlaceholderSpawner);
UFabDecalPlaceholderSpawner::~UFabDecalPlaceholderSpawner() {}
// End Class UFabDecalPlaceholderSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Importers_ActorSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabPlaceholderSpawner, UFabPlaceholderSpawner::StaticClass, TEXT("UFabPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabPlaceholderSpawner), 2253875887U) },
		{ Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner, UFabStaticMeshPlaceholderSpawner::StaticClass, TEXT("UFabStaticMeshPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabStaticMeshPlaceholderSpawner), 77222926U) },
		{ Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner, UFabSkeletalMeshPlaceholderSpawner::StaticClass, TEXT("UFabSkeletalMeshPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabSkeletalMeshPlaceholderSpawner), 1839233393U) },
		{ Z_Construct_UClass_UFabDecalPlaceholderSpawner, UFabDecalPlaceholderSpawner::StaticClass, TEXT("UFabDecalPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabDecalPlaceholderSpawner), 2067260488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Importers_ActorSpawner_h_3321299378(TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Importers_ActorSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_4_HostProject_Plugins_Fab_Source_Fab_Private_Importers_ActorSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
