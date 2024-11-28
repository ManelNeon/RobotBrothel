// Fill out your copyright notice in the Description page of Project Settings.


#include "Room.h"

// Sets default values
ARoom::ARoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_CurrentHostessCapacity = 0;

	_CurrentClientsCapacity = 0;

	_IsOccupied = false;

	_IsFullHostess = false;

	_IsFullClients = false;
}

FVector ARoom::GetTeleportLocation()
{
	return _TeleportLocationBasic;
}

void ARoom::SetTeleportLocation(FVector location)
{
	_TeleportLocationBasic = location;
}

TArray<FVector> ARoom::GetJobTeleportLocations()
{
	return _TeleportLocationJob;
}

void ARoom::SetTeleportJobLocation(FVector location)
{
	_TeleportLocationJob.Add(location);
}


bool ARoom::GetIsOccupied()
{
	return _IsOccupied;
}

void ARoom::SetIsOccupied(bool isOccupied)
{
	_IsOccupied = isOccupied;
}

int ARoom::GetCurrentHostessCapacity()
{
	return _CurrentHostessCapacity;
}

int ARoom::GetMaxHostessCapacity()
{
	return _MaximumHostessCapacity;
}

int ARoom::GetCurrentClientCapacity()
{
	return _CurrentClientsCapacity;
}

int ARoom::GetMaxClientCapacity()
{
	return _MaximumClientsCapacity;
}

bool ARoom::GetIsFullHostess()
{
	return _IsFullHostess;
}

bool ARoom::GetIsFullClients()
{
	return _IsFullClients;
}

void ARoom::AddWorkingHostess(int id)
{
	_CurrentHostessCapacity++;

	_HostessID[_CurrentHostessCapacity - 1] = id;

	_HostessTime[_CurrentHostessCapacity - 1] = 0;

	if (_CurrentHostessCapacity == _MaximumHostessCapacity) _IsFullHostess = true;
}

void ARoom::RemoveWorkingHostess(int id)
{
	_IsFullHostess = false;

	for (size_t i{ 0 }; i < _CurrentHostessCapacity; ++i)
	{
		if (_HostessID[i] == id)
			_HostessID[i] = -1;
	}

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "Hostess Removed From Pool");

	_CurrentHostessCapacity--;

	if (_CurrentHostessCapacity == 0) _IsOccupied = false;
}

void ARoom::AddClient(int id)
{
	_CurrentClientsCapacity++;

	_ClientID[_CurrentClientsCapacity - 1] = id;

	_ClientTime[_CurrentClientsCapacity - 1] = 0;

	if (_CurrentClientsCapacity == _MaximumClientsCapacity) _IsFullClients = true;
}

void ARoom::RemoveClient(int id)
{
	_IsFullClients = false;

	_CurrentClientsCapacity--;
}


// Called when the game starts or when spawned
void ARoom::BeginPlay()
{
	Super::BeginPlay();

	_GameInstance = Cast<UPipeTalkGameInstance>(GetWorld()->GetGameInstance());
	
	for (size_t i{ 0 }; i < _MaximumHostessCapacity; ++i)
	{
		_HostessID.Add(-1);
		_HostessTime.Add(-1);
	}

	for (size_t i{ 0 }; i < _MaximumClientsCapacity; ++i)
	{
		_ClientID.Add(-1);
		_ClientTime.Add(-1);
	}
}

// Called every frame
void ARoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

