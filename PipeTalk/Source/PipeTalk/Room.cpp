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

int ARoom::GetCurrentClientCapacity()
{
	return _CurrentClientsCapacity;
}

bool ARoom::GetIsFullHostess()
{
	return _IsFullHostess;
}

bool ARoom::GetIsFullClients()
{
	return _IsFullClients;
}

void ARoom::AddWorkingHostess()
{
	_CurrentHostessCapacity++;

	if (_CurrentHostessCapacity == _MaximumHostessCapacity) _IsFullHostess = true;
}

void ARoom::RemoveWorkingHostess()
{
	_IsFullHostess = false;

	_CurrentHostessCapacity--;
}

void ARoom::AddClient()
{
	_CurrentClientsCapacity++;

	if (_CurrentClientsCapacity == _MaximumClientsCapacity) _IsFullClients = true;
}

void ARoom::RemoveClient()
{
	_IsFullClients = false;

	_CurrentClientsCapacity--;
}


// Called when the game starts or when spawned
void ARoom::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

