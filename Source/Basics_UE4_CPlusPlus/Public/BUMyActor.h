// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Standard Include. Unreal bits and pieces
#include "CoreMinimal.h"

// Parent class
#include "GameFramework/Actor.h"

// Allows the use of the Unreal Header Tool (Interface between editor and code)
#include "BUMyActor.generated.h"

// UCLASS Macro is telling the Unreal Header Tool that this is a class we need to know about in the Editor (Blueprint refs, World Outliner, etc)
// Class Specifiers that can be put into the parenthesis
// https://docs.unrealengine.com/en-US/Programming/UnrealArchitecture/Reference/Classes/Specifiers/index.html
UCLASS()
// "_API" exposes this module out as a dll(dynamic linked library) when building
// ABUMyActor inherits from AActor
class BASICS_UE4_CPLUSPLUS_API ABUMyActor : public AActor
{
	// Unreal Macro
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABUMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Health;
	float MaxHealth;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
