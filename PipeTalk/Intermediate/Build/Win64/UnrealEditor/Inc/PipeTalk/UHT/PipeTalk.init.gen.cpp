// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePipeTalk_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PipeTalk;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PipeTalk()
	{
		if (!Z_Registration_Info_UPackage__Script_PipeTalk.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PipeTalk",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x87A5408A,
				0x2A140B58,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PipeTalk.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PipeTalk.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PipeTalk(Z_Construct_UPackage__Script_PipeTalk, TEXT("/Script/PipeTalk"), Z_Registration_Info_UPackage__Script_PipeTalk, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x87A5408A, 0x2A140B58));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
