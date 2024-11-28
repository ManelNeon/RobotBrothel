// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PipeTalkAICharacters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIPETALK_PipeTalkAICharacters_generated_h
#error "PipeTalkAICharacters.generated.h already included, missing '#pragma once' in PipeTalkAICharacters.h"
#endif
#define PIPETALK_PipeTalkAICharacters_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsMoving); \
	DECLARE_FUNCTION(execSetIsMoving); \
	DECLARE_FUNCTION(execMoveAIAround); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execSetID); \
	DECLARE_FUNCTION(execSetMaxSocialBattery); \
	DECLARE_FUNCTION(execGetMaxSocialBattery); \
	DECLARE_FUNCTION(execAddSocialBattery); \
	DECLARE_FUNCTION(execGetCurrentSocialBattery); \
	DECLARE_FUNCTION(execSetIsDoingATask); \
	DECLARE_FUNCTION(execGetIsDoingATask); \
	DECLARE_FUNCTION(execSetIsBeingPickedUp); \
	DECLARE_FUNCTION(execGetIsBeingPickedUp); \
	DECLARE_FUNCTION(execGetCucumberStat); \
	DECLARE_FUNCTION(execGetIntelligenceStat); \
	DECLARE_FUNCTION(execGetCharismaStat);


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPipeTalkAICharacters(); \
	friend struct Z_Construct_UClass_APipeTalkAICharacters_Statics; \
public: \
	DECLARE_CLASS(APipeTalkAICharacters, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(APipeTalkAICharacters)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APipeTalkAICharacters(APipeTalkAICharacters&&); \
	APipeTalkAICharacters(const APipeTalkAICharacters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APipeTalkAICharacters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APipeTalkAICharacters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APipeTalkAICharacters) \
	NO_API virtual ~APipeTalkAICharacters();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_9_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class APipeTalkAICharacters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkAICharacters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
