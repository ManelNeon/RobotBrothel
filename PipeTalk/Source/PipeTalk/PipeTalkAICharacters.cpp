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

	_ID = -1;

	JobLocationID = -1;
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
		return;
	}
	
	if(!_IsClient)
		gameInstance->AmountOfHostess++;

	_MaxSocialBattery = 100;
	
	_CurrentSocialBattery = _MaxSocialBattery;

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

int APipeTalkAICharacters::GetCharismaStat()
{
	return _CharismaStat;
}

int APipeTalkAICharacters::GetIntelligenceStat()
{
	return _IntelligenceStat;
}

bool APipeTalkAICharacters::GetCucumberStat()
{
	return _HasCucumber;
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

int APipeTalkAICharacters::GetCurrentSocialBattery()
{
	return _CurrentSocialBattery;
}

void APipeTalkAICharacters::AddSocialBattery(int socialBattery)
{
	_CurrentSocialBattery += socialBattery;

	UE_LOG(LogTemp, Warning, TEXT("Social battery is %i"), _CurrentSocialBattery);
	
	if (_CurrentSocialBattery > _MaxSocialBattery) _CurrentSocialBattery = _MaxSocialBattery;
}

int APipeTalkAICharacters::GetMaxSocialBattery()
{
	return _MaxSocialBattery;
}

void APipeTalkAICharacters::SetMaxSocialBattery(int socialBattery)
{
	_MaxSocialBattery = socialBattery;
}

// Called to bind functionality to input
void APipeTalkAICharacters::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APipeTalkAICharacters::SetID(int id)
{
	_ID = id;
}

int APipeTalkAICharacters::GetID()
{
	return _ID;
}

void APipeTalkAICharacters::MoveAIAround()
{
	FName EventName = TEXT("MoveAround");

	if (UFunction* Function = FindFunction(EventName))
	{
		ProcessEvent(Function, nullptr);
	}
	else
	{
	}
}

void APipeTalkAICharacters::SetIsMoving(bool isMoving)
{
	_IsMoving = isMoving;
}

bool APipeTalkAICharacters::GetIsMoving()
{
	return _IsMoving;
}
