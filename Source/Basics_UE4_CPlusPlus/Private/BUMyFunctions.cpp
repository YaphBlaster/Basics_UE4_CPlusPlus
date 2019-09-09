// Fill out your copyright notice in the Description page of Project Settings.


#include "BUMyFunctions.h"

// Sets default values
ABUMyFunctions::ABUMyFunctions()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUMyFunctions::BeginPlay()
{
	// Call the parent's (Super) implementation of BeginPlay
	Super::BeginPlay();
	
}

// Called every frame
void ABUMyFunctions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUMyFunctions::MyBasicFunction()
{

}

void ABUMyFunctions::MyIncomingFunction(FString inString)
{

}

void ABUMyFunctions::MyFunctionWithOptionalInput(int inInt, bool bCanJump /*= false*/)
{

}

FString ABUMyFunctions::MyReturnFunction1()
{
	return "Hello World";
}

FString ABUMyFunctions::MyReturnFunction2(FString inString)
{
	return "Hello Universe";
}

void ABUMyFunctions::MyReferenceFunction(FString inString, FString& OutString)
{
	OutString = inString;
}

void ABUMyFunctions::MyBasicBPFunction()
{

}

bool ABUMyFunctions::MyBasicPureBPFunction()
{
	return true;
}

void ABUMyFunctions::MyStaticFunction()
{

}

