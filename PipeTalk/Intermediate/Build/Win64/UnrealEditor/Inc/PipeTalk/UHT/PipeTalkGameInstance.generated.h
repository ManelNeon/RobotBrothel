// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PipeTalkGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APipeTalkAICharacters;
#ifdef PIPETALK_PipeTalkGameInstance_generated_h
#error "PipeTalkGameInstance.generated.h already included, missing '#pragma once' in PipeTalkGameInstance.h"
#endif
#define PIPETALK_PipeTalkGameInstance_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGetMoney); \
	DECLARE_FUNCTION(execGiveMoney); \
	DECLARE_FUNCTION(execGiveXP); \
	DECLARE_FUNCTION(execRemoveHostess); \
	DECLARE_FUNCTION(execGetHostess); \
	DECLARE_FUNCTION(execGetNumberOfHostess);


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPipeTalkGameInstance(); \
	friend struct Z_Construct_UClass_UPipeTalkGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPipeTalkGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(UPipeTalkGameInstance)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPipeTalkGameInstance(UPipeTalkGameInstance&&); \
	UPipeTalkGameInstance(const UPipeTalkGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPipeTalkGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPipeTalkGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPipeTalkGameInstance) \
	NO_API virtual ~UPipeTalkGameInstance();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_11_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class UPipeTalkGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
