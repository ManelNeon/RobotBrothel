// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkGameInstance.h"

UPipeTalkGameInstance::UPipeTalkGameInstance()
{
	XP = 0;

	Level = 1;

	Money = 1200;

	AmountOfHostess = 0;
}

void UPipeTalkGameInstance::DestroyItAll()
{
	XP = 0;

	Level = 1;

	Money = 1200;

	AmountOfHostess = 0;

	HostessArray.Empty();
}

int UPipeTalkGameInstance::GetNumberOfHostess()
{
	return HostessArray.Num();
}

APipeTalkAICharacters* UPipeTalkGameInstance::GetHostess(int id)
{
	return HostessArray[id];
}

bool UPipeTalkGameInstance::RemoveHostess(int id)
{
	if (HostessArray[id]->GetIsDoingATask()) return false;

	HostessArray[id]->Destroy();

	//THIS IS BAD, REALLY BAD, BUT I have to deliever the game in 1 day so FK IT MEMORY MANAGEMENT 0
	HostessArray[id] = nullptr;

	return true;
}

void UPipeTalkGameInstance::GiveXP(int amountOfXP)
{
	int xpToLevelUp = Level * 100 + 325;

	XP += amountOfXP;

	if (XP < xpToLevelUp) return;

	XP -= xpToLevelUp;

	Level++;
}

void UPipeTalkGameInstance::GiveMoney(int amountOfMoney)
{
	Money += amountOfMoney;

	if (Money > 99999999) Money = 99999999;
}

int UPipeTalkGameInstance::GetMoney()
{
	return Money;
}

int UPipeTalkGameInstance::GetLevel()
{
	return Level;
}