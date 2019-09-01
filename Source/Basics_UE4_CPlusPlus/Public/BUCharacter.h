// Fill out your copyright notice in the Description page of Project Settings.

// Pragma once means, only have 1 copy of an include line
// EX.
// #include "CoreMinimal.h"
// #include "CoreMinimal.h"
// This will only include CoreMinimal once
#pragma once

// Includes are the same as imports
// It copies over the file to use
// You want to limit includes to what you really need
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Paths.h"
#include "BUCharacter.generated.h"

UCLASS()
class BASICS_UE4_CPLUSPLUS_API ABUCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABUCharacter();

	FPaths::ProjectDir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
