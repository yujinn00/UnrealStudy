// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealComposition/Person.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerson() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UCard_NoRegister();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UPerson();
UNREALCOMPOSITION_API UClass* Z_Construct_UClass_UPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealComposition();
// End Cross Module References

// Begin Class UPerson
void UPerson::StaticRegisterNativesUPerson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerson);
UClass* Z_Construct_UClass_UPerson_NoRegister()
{
	return UPerson::StaticClass();
}
struct Z_Construct_UClass_UPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Person.h" },
		{ "ModuleRelativePath", "Person.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Person.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card_MetaData[] = {
		{ "ModuleRelativePath", "Person.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPerson_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerson, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerson_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerson, Card), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card_MetaData), NewProp_Card_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerson_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerson_Statics::NewProp_Card,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealComposition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerson_Statics::ClassParams = {
	&UPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerson()
{
	if (!Z_Registration_Info_UClass_UPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerson.OuterSingleton, Z_Construct_UClass_UPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerson.OuterSingleton;
}
template<> UNREALCOMPOSITION_API UClass* StaticClass<UPerson>()
{
	return UPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerson);
UPerson::~UPerson() {}
// End Class UPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Person_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerson, UPerson::StaticClass, TEXT("UPerson"), &Z_Registration_Info_UClass_UPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerson), 2231494091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Person_h_2290707403(TEXT("/Script/UnrealComposition"),
	Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Person_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_UnrealStudy_UEPart1_UnrealComposition_Source_UnrealComposition_Person_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
