// Fill out your copyright notice in the Description page of Project Settings.


#include "RelaxationRoom.h"

void ARelaxationRoom::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARelaxationRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!_IsOccupied)
	{
		return;
	}

	for (size_t i{ 0 }; i < _CurrentHostessCapacity; ++i)
	{
		if (_GameInstance->HostessArray[_HostessID[i]]->GetCurrentSocialBattery() < _GameInstance->HostessArray[_HostessID[i]]->GetMaxSocialBattery())
		{
			_GameInstance->HostessArray[_HostessID[i]]->AddSocialBattery(SocialBatteryToGive);

			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "Hostess Still Charging");

			continue;
		}

		_GameInstance->HostessArray[_HostessID[i]]->SetIsDoingATask(false);

		_GameInstance->HostessArray[_HostessID[i]]->MoveAIAround();

		_HostessTime[i] = 0;

		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "Hostess Roaming");

		RemoveWorkingHostess(_HostessID[i]);
	}
}