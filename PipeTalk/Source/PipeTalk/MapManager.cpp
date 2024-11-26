// Fill out your copyright notice in the Description page of Project Settings.


#include "MapManager.h"

// Sets default values
AMapManager::AMapManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UBlueprint> blueprint_finder(TEXT("Blueprint'/Game/Blueprints/BP_Room.BP_Room'"));

	_RoomClass = (UClass*)blueprint_finder.Object->GeneratedClass;

	static ConstructorHelpers::FObjectFinder<UBlueprint> second_finder(TEXT("Blueprint'/Game/Blueprints/BP_Plot.BP_Plot'"));

	_PlotClass = (UClass*)second_finder.Object->GeneratedClass;
}


void AMapManager::BuildFirstRoom()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Is Building"));
}

// Called when the game starts or when spawned
void AMapManager::BeginPlay()
{
	Super::BeginPlay();

	int counterHorizontal = 0;
	int counterVertical = 0;

	for (size_t i{ 0 }; i < 49; ++i)
	{
		_Plots.Add(Cast<APlot>(GetWorld()->SpawnActor(_PlotClass)));

		if (i % 7 == 0)
		{
			counterHorizontal++;
			counterVertical = 0;
		}

		_Plots[i]->SetActorLocation(FVector(counterVertical * 1000, (1000 * counterHorizontal), 0));

		_Plots[i]->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		_Plots[i]->SetMapManager(this);

		counterVertical++;
	}
}

// Called every frame
void AMapManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

