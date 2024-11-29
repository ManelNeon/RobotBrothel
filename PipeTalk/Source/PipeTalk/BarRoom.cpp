// Fill out your copyright notice in the Description page of Project Settings.


#include "BarRoom.h"
#include "Kismet/GameplayStatics.h"

void ABarRoom::BeginPlay()
{
	Super::BeginPlay();

	PrimaryActorTick.bCanEverTick = false;
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
			continue;
		}

		_GameInstance->GiveMoney(MoneyToGivePerHostess);

		UGameplayStatics::PlaySound2D(GetWorld(), MoneySound);

		if (_HostessTime[i] == 3)
		{
			_HostessTime[i] = -1;

			RemoveWorkingHostess();

			_GameInstance->HostessArray[_HostessID[i]]->AddSocialBattery(-SocialBatteryToTake);

			_GameInstance->HostessArray[_HostessID[i]]->SetIsDoingATask(false);

			_GameInstance->HostessArray[_HostessID[i]]->MoveAIAround();

			IsFilledLocation[i] = false;

			_GameInstance->HostessArray[_HostessID[i]]->JobLocationID = -1;

			_HostessID[i] = -1;

			continue;
		}

		_HostessTime[i]++;
	}
}