// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectReflection/Teacher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacher() {}

// Begin Cross Module References
OBJECTREFLECTION_API UClass* Z_Construct_UClass_UPerson();
OBJECTREFLECTION_API UClass* Z_Construct_UClass_UTeacher();
OBJECTREFLECTION_API UClass* Z_Construct_UClass_UTeacher_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectReflection();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Teacher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeacher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTeacher_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTeacher, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeacher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeacher_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTeacher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectReflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeacher_Statics::ClassParams = {
	&UTeacher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTeacher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::PropPointers),
	0,
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
template<> OBJECTREFLECTION_API UClass* StaticClass<UTeacher>()
{
	return UTeacher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeacher);
UTeacher::~UTeacher() {}
// End Class UTeacher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_ObjectReflection_Source_ObjectReflection_Teacher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeacher, UTeacher::StaticClass, TEXT("UTeacher"), &Z_Registration_Info_UClass_UTeacher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeacher), 1078654709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_ObjectReflection_Source_ObjectReflection_Teacher_h_3762595968(TEXT("/Script/ObjectReflection"),
	Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_ObjectReflection_Source_ObjectReflection_Teacher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_ObjectReflection_Source_ObjectReflection_Teacher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
