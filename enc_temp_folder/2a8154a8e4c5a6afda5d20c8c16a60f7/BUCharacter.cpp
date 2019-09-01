// Fill out your copyright notice in the Description page of Project Settings.


#include "BUCharacter.h"

// Sets default values
ABUCharacter::ABUCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABUCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABUCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

