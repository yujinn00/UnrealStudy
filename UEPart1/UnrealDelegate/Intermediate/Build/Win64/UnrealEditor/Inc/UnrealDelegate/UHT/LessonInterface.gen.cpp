// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDelegate/LessonInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLessonInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNREALDELEGATE_API UClass* Z_Construct_UClass_ULessonInterface();
UNREALDELEGATE_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealDelegate();
// End Cross Module References

// Begin Interface ULessonInterface
void ULessonInterface::StaticRegisterNativesULessonInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULessonInterface);
UClass* Z_Construct_UClass_ULessonInterface_NoRegister()
{
	return ULessonInterface::StaticClass();
}
struct Z_Construct_UClass_ULessonInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "LessonInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILessonInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULessonInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULessonInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULessonInterface_Statics::ClassParams = {
	&ULessonInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULessonInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULessonInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULessonInterface()
{
	if (!Z_Registration_Info_UClass_ULessonInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULessonInterface.OuterSingleton, Z_Construct_UClass_ULessonInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULessonInterface.OuterSingleton;
}
template<> UNREALDELEGATE_API UClass* StaticClass<ULessonInterface>()
{
	return ULessonInterface::StaticClass();
}
ULessonInterface::ULessonInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULessonInterface);
ULessonInterface::~ULessonInterface() {}
// End Interface ULessonInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_LessonInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULessonInterface, ULessonInterface::StaticClass, TEXT("ULessonInterface"), &Z_Registration_Info_UClass_ULessonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULessonInterface), 1912820482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_LessonInterface_h_1902501830(TEXT("/Script/UnrealDelegate"),
	Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_LessonInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_LessonInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
