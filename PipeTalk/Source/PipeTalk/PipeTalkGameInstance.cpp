// Fill out your copyright notice in the Description page of Project Settings.


#include "PipeTalkGameInstance.h"

UPipeTalkGameInstance::UPipeTalkGameInstance()
{
	XP = 0;

	Level = 1;

	Money = 1000;

	AmountOfHostess = 0;
}

int UPipeTalkGameInstance::GetNumberOfHostess()
{
	return HostessArray.Num();
}

APipeTalkAICharacters* UPipeTalkGameInstance::GetHostess(int id)
{
	return HostessArray[id];
}

void UPipeTalkGameInstance::RemoveHostess(int id)
{
	if (HostessArray[id]->GetIsDoingATask()) return;

	HostessArray[id]->Destroy();

	//THIS IS BAD, REALLY BAD, BUT I have to deliever the game in 1 day so FK IT MEMORY MANAGEMENT 0
	HostessArray.RemoveAt(id, EAllowShrinking::No);
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