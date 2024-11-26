// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PipeTalkGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIPETALK_PipeTalkGameMode_generated_h
#error "PipeTalkGameMode.generated.h already included, missing '#pragma once' in PipeTalkGameMode.h"
#endif
#define PIPETALK_PipeTalkGameMode_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPipeTalkGameMode(); \
	friend struct Z_Construct_UClass_APipeTalkGameMode_Statics; \
public: \
	DECLARE_CLASS(APipeTalkGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(APipeTalkGameMode)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APipeTalkGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APipeTalkGameMode(APipeTalkGameMode&&); \
	APipeTalkGameMode(const APipeTalkGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APipeTalkGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APipeTalkGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APipeTalkGameMode) \
	NO_API virtual ~APipeTalkGameMode();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_12_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class APipeTalkGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
