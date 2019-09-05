// Fill out your copyright notice in the Description page of Project Settings.


#include "BUMyActor.h"

// Sets default values
// The colon denotes the PreConstructor
ABUMyActor::ABUMyActor()
	: Health(0.0f)
	, MaxHealth(100.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABUMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

