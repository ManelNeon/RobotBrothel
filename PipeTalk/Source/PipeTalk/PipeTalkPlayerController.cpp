// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkPlayerController.h"
#include "EnhancedInputSubsystems.h"

void APipeTalkPlayerController::BeginPlay()
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}
}
