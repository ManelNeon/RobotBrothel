// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PipeTalk/PipeTalkCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePipeTalkCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkCharacter();
PIPETALK_API UClass* Z_Construct_UClass_APipeTalkCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PipeTalk();
// End Cross Module References

// Begin Class APipeTalkCharacter
void APipeTalkCharacter::StaticRegisterNativesAPipeTalkCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APipeTalkCharacter);
UClass* Z_Construct_UClass_APipeTalkCharacter_NoRegister()
{
	return APipeTalkCharacter::StaticClass();
}
struct Z_Construct_UClass_APipeTalkCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PipeTalkCharacter.h" },
		{ "ModuleRelativePath", "PipeTalkCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PipeTalkCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APipeTalkCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APipeTalkCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APipeTalkCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APipeTalkCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APipeTalkCharacter_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APipeTalkCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PipeTalk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APipeTalkCharacter_Statics::ClassParams = {
	&APipeTalkCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APipeTalkCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APipeTalkCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APipeTalkCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APipeTalkCharacter()
{
	if (!Z_Registration_Info_UClass_APipeTalkCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APipeTalkCharacter.OuterSingleton, Z_Construct_UClass_APipeTalkCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APipeTalkCharacter.OuterSingleton;
}
template<> PIPETALK_API UClass* StaticClass<APipeTalkCharacter>()
{
	return APipeTalkCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APipeTalkCharacter);
APipeTalkCharacter::~APipeTalkCharacter() {}
// End Class APipeTalkCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APipeTalkCharacter, APipeTalkCharacter::StaticClass, TEXT("APipeTalkCharacter"), &Z_Registration_Info_UClass_APipeTalkCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APipeTalkCharacter), 566509021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkCharacter_h_3908213962(TEXT("/Script/PipeTalk"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
