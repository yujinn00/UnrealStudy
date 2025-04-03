// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDelegate/CourseInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCourseInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALDELEGATE_API UClass* Z_Construct_UClass_UCourseInfo();
UNREALDELEGATE_API UClass* Z_Construct_UClass_UCourseInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealDelegate();
// End Cross Module References

// Begin Class UCourseInfo
void UCourseInfo::StaticRegisterNativesUCourseInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCourseInfo);
UClass* Z_Construct_UClass_UCourseInfo_NoRegister()
{
	return UCourseInfo::StaticClass();
}
struct Z_Construct_UClass_UCourseInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CourseInfo.h" },
		{ "ModuleRelativePath", "CourseInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[] = {
		{ "ModuleRelativePath", "CourseInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCourseInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCourseInfo_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCourseInfo, Contents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contents_MetaData), NewProp_Contents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCourseInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCourseInfo_Statics::NewProp_Contents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCourseInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCourseInfo_Statics::ClassParams = {
	&UCourseInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCourseInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCourseInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCourseInfo()
{
	if (!Z_Registration_Info_UClass_UCourseInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCourseInfo.OuterSingleton, Z_Construct_UClass_UCourseInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCourseInfo.OuterSingleton;
}
template<> UNREALDELEGATE_API UClass* StaticClass<UCourseInfo>()
{
	return UCourseInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCourseInfo);
UCourseInfo::~UCourseInfo() {}
// End Class UCourseInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_CourseInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCourseInfo, UCourseInfo::StaticClass, TEXT("UCourseInfo"), &Z_Registration_Info_UClass_UCourseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCourseInfo), 2920989908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_CourseInfo_h_2761615562(TEXT("/Script/UnrealDelegate"),
	Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_CourseInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealDelegate_Source_UnrealDelegate_CourseInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
