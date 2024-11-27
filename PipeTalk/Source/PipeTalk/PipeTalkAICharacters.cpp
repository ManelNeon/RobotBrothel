// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkAICharacters.h"
#include "PipeTalkGameInstance.h"

// Sets default values
APipeTalkAICharacters::APipeTalkAICharacters()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_IsBeingPickedUp = false;

	_IsDoingATask = false;
}

APipeTalkAICharacters::APipeTalkAICharacters(bool isClient)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_IsBeingPickedUp = false;

	_IsDoingATask = false;

	_IsClient = isClient;
}

// Called when the game starts or when spawned
void APipeTalkAICharacters::BeginPlay()
{
	Super::BeginPlay();

	auto gameInstance = Cast<UPipeTalkGameInstance>(GetGameInstance());

	if (!gameInstance) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("No Pointer"));
		return;
	}
	
	if(!_IsClient)
		gameInstance->AmountOfHostess++;

	if (gameInstance->AmountOfHostess == 1)
	{
		_CharismaStat = FMath::RandRange(0, 40);
		_IntelligenceStat = FMath::RandRange(0, 40);
		_HasCucumber = false;
		return;
	}

	_CharismaStat = FMath::RandRange(0, 100);
	_IntelligenceStat = FMath::RandRange(0, 100);
	_HasCucumber = false;

	if (FMath::RandRange(0, 100) < 10)
		_HasCucumber = true;	
}

// Called every frame
void APipeTalkAICharacters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool APipeTalkAICharacters::GetIsBeingPickedUp()
{
	return _IsBeingPickedUp;
}

void APipeTalkAICharacters::SetIsBeingPickedUp(bool isPickedUp)
{
	_IsBeingPickedUp = isPickedUp;
}


bool APipeTalkAICharacters::GetIsDoingATask()
{
	return _IsDoingATask;
}

void APipeTalkAICharacters::SetIsDoingATask(bool isDoingTask)
{
	_IsDoingATask = isDoingTask;
}

// Called to bind functionality to input
void APipeTalkAICharacters::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APipeTalkAICharacters::GetPicked()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("PICKED ME UP"));
}
