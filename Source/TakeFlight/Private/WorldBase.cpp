// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldBase.h"

// Sets default values
AWorldBase::AWorldBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AWorldBase::GenerateIslands()
{
	FActorSpawnParameters spawnParms;
	spawnParms.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	GetWorld()->SpawnActor<AActor>(islandBP, GetActorTransform(), spawnParms);
}

// Called when the game starts or when spawned
void AWorldBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

