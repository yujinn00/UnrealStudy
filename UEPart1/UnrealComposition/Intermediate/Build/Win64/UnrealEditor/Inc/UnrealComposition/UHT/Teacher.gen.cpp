// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealComposition/Teacher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacher() {}

// Begin Cross Module References
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UPerson();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UTeacher();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UTeacher_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealComposition();
// End Cross Module References

// Begin Class UTeacher
void UTeacher::StaticRegisterNativesUTeacher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeacher);
UClass* Z_Construct_UClass_UTeacher_NoRegister()
{
	return UTeacher::StaticClass();
}
struct Z_Construct_UClass_UTeacher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Teacher.h" },
		{ "ModuleRelativePath", "Teacher.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeacher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTeacher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealComposition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTeacher_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULessonInterface_NoRegister, (int32)VTABLE_OFFSET(UTeacher, ILessonInterface), false },  // 532214440
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeacher_Statics::ClassParams = {
	&UTeacher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeacher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTeacher()
{
	if (!Z_Registration_Info_UClass_UTeacher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeacher.OuterSingleton, Z_Construct_UClass_UTeacher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTeacher.OuterSingleton;
}
template<> UNREALCOMPOSITION_API UClass* StaticClass<UTeacher>()
{
	return UTeacher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeacher);
UTeacher::~UTeacher() {}
// End Class UTeacher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Teacher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeacher, UTeacher::StaticClass, TEXT("UTeacher"), &Z_Registration_Info_UClass_UTeacher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeacher), 1529235828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Teacher_h_1637833462(TEXT("/Script/UnrealComposition"),
	Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Teacher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Teacher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
