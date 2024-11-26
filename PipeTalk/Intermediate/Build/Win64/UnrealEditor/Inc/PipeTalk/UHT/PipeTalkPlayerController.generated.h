// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PipeTalkPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIPETALK_PipeTalkPlayerController_generated_h
#error "PipeTalkPlayerController.generated.h already included, missing '#pragma once' in PipeTalkPlayerController.h"
#endif
#define PIPETALK_PipeTalkPlayerController_generated_h

#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPipeTalkPlayerController(); \
	friend struct Z_Construct_UClass_APipeTalkPlayerController_Statics; \
public: \
	DECLARE_CLASS(APipeTalkPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PipeTalk"), NO_API) \
	DECLARE_SERIALIZER(APipeTalkPlayerController)


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APipeTalkPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APipeTalkPlayerController(APipeTalkPlayerController&&); \
	APipeTalkPlayerController(const APipeTalkPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APipeTalkPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APipeTalkPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APipeTalkPlayerController) \
	NO_API virtual ~APipeTalkPlayerController();


#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_10_PROLOG
#define FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIPETALK_API UClass* StaticClass<class APipeTalkPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_RobotBrothel_PipeTalk_Source_PipeTalk_PipeTalkPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
