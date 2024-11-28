// Fill out your copyright notice in the Description page of Project Settings.


#include "BarRoom.h"

void ABarRoom::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABarRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!_IsOccupied)
	{
		return;
	}

	for (size_t i{ 0 }; i < _HostessTime.Num(); ++i)
	{
		if (_HostessTime[i] == -1) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "No One In This Part");
			continue;
		}

		if (_HostessTime[i] == 3)
		{
			_GameInstance->HostessArray[_HostessID[i]]->AddSocialBattery(-SocialBatteryToTake);

			_GameInstance->HostessArray[_HostessID[i]]->SetIsDoingATask(false);

			_GameInstance->HostessArray[_HostessID[i]]->MoveAIAround();
			
			RemoveWorkingHostess(_HostessID[i]);

			_HostessTime[i] = -1;

			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "Hostess Roaming");

			continue;
		}

		_HostessTime[i]++;

		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, "Hostess Still Working");

		_GameInstance->GiveMoney(MoneyToGivePerHostess);
	}
}