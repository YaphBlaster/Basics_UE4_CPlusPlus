// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUMyFunctions.generated.h"

UCLASS()
class BASICS_UE4_CPLUSPLUS_API ABUMyFunctions : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABUMyFunctions();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MyBasicFunction();

	void MyIncomingFunction(FString inString);

	// Optional parameters must be placed at the end
	void MyFunctionWithOptionalInput(int inInt, bool bCanJump = false);

	FString MyReturnFunction1();

	FString MyReturnFunction2(FString inString);

	// Will modify the OutString variable directly
	// Ex
	// FString myString
	// MyReferenceFunction("str", myString);
	void MyReferenceFunction(FString inString, FString& OutString);


	UFUNCTION(BlueprintCallable, Category = "Basics UE4 C++")
		void MyBasicBPFunction();

	UFUNCTION(BlueprintPure, Category = "Basics UE4 C++")
		bool MyBasicPureBPFunction();

	// Static Functions
	// Ex
	// ABUMyFunctions::MyStaticFunction()
	static void MyStaticFunction();


};
