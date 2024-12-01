// Fill out your copyright notice in the Description page of Project Settings.


#include "RelaxationRoom.h"

void ARelaxationRoom::BeginPlay()
{
	Super::BeginPlay();

	PrimaryActorTick.bCanEverTick = false;
}

// Called every frame
void ARelaxationRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!_IsOccupied)
	{
		return;
	}

	for (size_t i{ 0 }; i < _MaximumHostessCapacity; ++i)
	{
		if (_HostessID[i] == -1) 
		{
			UE_LOG(LogTemp, Warning, TEXT("No Hostess Here"));

			continue;
		}

		if (_GameInstance->HostessArray[_HostessID[i]]->GetCurrentSocialBattery() < _GameInstance->HostessArray[_HostessID[i]]->GetMaxSocialBattery())
		{
			_GameInstance->HostessArray[_HostessID[i]]->AddSocialBattery(SocialBatteryToGive);

			UE_LOG(LogTemp, Warning, TEXT("Hostess Here Money Given"));

			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("Hostess Removed"));

		_HostessTime[i] = -1;

		RemoveWorkingHostess();

		IsFilledLocation[i] = false;

		_GameInstance->HostessArray[_HostessID[i]]->SetIsDoingATask(false);

		_GameInstance->HostessArray[_HostessID[i]]->MoveAIAround();

		_GameInstance->HostessArray[_HostessID[i]]->JobLocationID = -1;

		_HostessID[i] = -1;
	}
}