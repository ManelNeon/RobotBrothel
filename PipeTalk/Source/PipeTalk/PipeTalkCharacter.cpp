// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "SceneView.h"
#include "InputActionValue.h"

// Sets default values
APipeTalkCharacter::APipeTalkCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APipeTalkCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APipeTalkCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APipeTalkCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APipeTalkCharacter::Move);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Cant Find Enhanced Input Component"));
	}
}

void APipeTalkCharacter::Move(const FInputActionValue& value)
{
	FVector2D _MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), _MovementVector.Y, true);
		AddMovementInput(GetActorRightVector(), _MovementVector.X, true);
	}
}