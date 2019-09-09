// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUMyVariables.generated.h"

// Defining a namespace for this file
#define LOCTEXT_NAMESPACE "MyVariables"

UENUM(BlueprintType)
enum class EMegaModeEnum : uint8
{
	MME_Alpha UMETA(DisplayName = "Alpha"),
	MME_Beta UMETA(DisplayName = "Beta"), 
	MME_Gamma UMETA(DisplayName = "Gamma"),
};

USTRUCT(BlueprintType)
struct FDoggoStruct
{

	GENERATED_BODY()

public:
	//Constructor
	FDoggoStruct()
	{
		//Always initialize your USTRUCT variables!
		//   exception is if you know the variable type has its own default constructor
		Age = 0;
		FirstName = NAME_None;
		Happiness = 0;
	}

	//Constructor
	FDoggoStruct(int32 Age, int32 Happiness, FName FirstName)
	{
		//Always initialize your USTRUCT variables!
		//   exception is if you know the variable type has its own default constructor
		this->Age = Age;
		this->Happiness = Happiness;
		this->FirstName = FirstName;

	}

protected:
	UPROPERTY()
		int32 Age;

	UPROPERTY()
		int32 Happiness;
	
	UPROPERTY()
		FName FirstName;

public:
	// Setters
	void SetAge(const int32 NewAge)
	{
		Age = NewAge;
	}


	void SetHappiness(const int32 NewHappiness)
	{
		Happiness = NewHappiness;
	}

	void SetFirstName(const FName NewFirstName)
	{
		FirstName = NewFirstName;
	}

	// Getters
	int32 GetAge() const
	{
		return Age;
	}

	int32 GetHappiness() const
	{
		return Happiness;
	}

	FName GetFirstName() const
	{
		return FirstName;
	}

	// Methods
	void GiveTreat()
	{
		SetHappiness(GetHappiness() + 1);
	}

};

UCLASS()
class BASICS_UE4_CPLUSPLUS_API ABUMyVariables : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABUMyVariables();

	bool MyBoolean;
	bool MySetBoolean = true;

	// you can only use int in blueprints (not uint8, int64)
	int MyInteger;
	int MySetInteger = 5;

	// uint8 is a byte
	uint8 MyUnsignedInt8;
	int32 MyInt32; // pretty much the same as int
	int64 MyInt64;

	float MyFloat; // Normally 32 bit
	float MySetFloat1 = 3;
	float MySetFloat2 = 3.f;
	float MySetFloat3 = 3.0;
	float MySetFloat4 = 3.0f;

	double MyDouble; // Normally 64 bit
	long double MyDoubleDouble; // Normally 128 bit

	// Unreal Vectors, Rotators, Transforms:

	FVector MyVector;
	FVector MySetVector1 = FVector(50.0);
	FVector MySetVector2 = FVector(50.0f, 50.0f, 50.0f);
	FVector MySetVector3 = FVector(FVector::ZeroVector); // Static constant value
	FVector MySetVector4 = FVector(FVector::OneVector); // Static constant value

	FRotator MyRotator;
	FRotator MySetRotator1 = FRotator(90.0);
	FRotator MySetRotator2 = FRotator(FRotator::ZeroRotator);


	// Combination of vectors and rotators (transform, rotation, scale)
	FTransform MyTransform;
	// Identity gives us:
	// (0.0f, 0.0f, 0.0f) for Transform
	// (0.0f, 0.0f, 0.0f) for Rotation
	// (1.0f, 1.0f, 1.0f) for Scale
	FTransform MySetTransform1 = FTransform(FTransform::Identity);
	FTransform MySetTransform2 = FTransform(MyRotator, MyVector, MyVector);
	FTransform MySetTransform3 = FTransform(FRotator(20.0f, 20.0f, 30.0f), FVector(50.0f, 50.0f, 50.0f), FVector::OneVector);

	// Unreal String Types

	// Pink pin in blueprints
	// Does not support localization
	FString MyString;
	FString MySetString1 = "Hello World";
	FString MySetString2 = TEXT("Hello World"); // More performant

	// Does support localization
	FText MyText;
	FText MySetText1 = NSLOCTEXT("MyNameSpace", "MyUniqueKey", "Hellow World");
	FText MySetText2 = LOCTEXT("MyUniqueKey2", "Hellow World");

	FName MyName;
	FName MySetName = TEXT("Hello World");
	FName MySetName2 = NAME_None;

	const TCHAR* MyTChar = *MyString;

	// *************************  Medium Complexity Variables *************************


	AActor* MyActorPtr; // Pointer is an address in memory to where you can find the object

	FString* MyStringPtr = new FString();

	// Enums
	EMegaModeEnum BaseMode;
	EMegaModeEnum EOneOhOne = EMegaModeEnum::MME_Gamma;

	// Structs
	FDoggoStruct MyDoggo;
	FDoggoStruct MySetDoggo = FDoggoStruct(1, 10, FName("Snoopy"));

	// TArray is a template function (can take any variable type within the <>'s)
	TArray<FString> MyStrings;
	TArray<AActor*> MyActors;
	// Unique version of an array (hold one of itself)
	TSet<AActor*> MySetActors;
	TMap<FName, AActor*> MyPlayerMap;

	// ************************* Advanced Complexity Variables *************************
	// Part of Unreal's "Smart library" (deletion, memory management)
	TSharedPtr<AActor> MyActorSharedPtr;

	TSharedRef<FString> MyActorSharedRef = MakeShareable(new FString());
	TWeakPtr<AActor> MyActorWeakPtr;

	// Exist when the compiler runs
	// Does not exist in the object (it is a class level variable)
	// Can be accessed without making an object
	// Must be initialized outside of a class
	static int MyStaticInteger;

	// ************************* Blueprint Exposed Variables *************************
	
	// In order to view and use these in the Unreal Editor, they must be exposed to Unreal Header Tool (UPROPERTY, UFUNCTION)
	// Property Specifiers (VisibleAnywhere, BlueprintReadOnly, etc) can be found here:
	// https://docs.unrealengine.com/en-US/Programming/UnrealArchitecture/Reference/Properties/Specifiers/index.html
	// Metadata Specifiers can be found here (Navigate to the Property Metadata Specifiers):
	// https://docs.unrealengine.com/en-US/Programming/UnrealArchitecture/Reference/Metadata/index.html
	// NOTE: No semicolons are needed for when you expose to blueprint using UPROPERTY, UFUNCTION, as the Unreal Header Tool will stitch the next line (property or function) to Unreal

	// BlueprintReadWrite is similar to Getters and Setters
	// EditAnywhere means you can change the property in the Details panel, either in the Defaults or the Instance
	// Category defines what section the property will appear under
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tutorial")
	float CurrentHealth;

	// BlueprintReadOnly is similar to a Getter
	// VisibleAnywhere means the property can be viewed in the Details panel, either in the Defaults or the Instance
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Default")
	int KillCounter;

	// EditDefaultsOnly means that the property can only be changed in the Defaults and not the instance
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	bool bIsAlive;

	// VisibleInstanceOnly means that the property can only be seen in the GameEditor as a Game Instance
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Weapon")
	AActor* EquippedWeapon;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Init Static Variables - Must be init outside class
// Initializing the static variable in the system
int ABUMyVariables::MyStaticInteger = 0;

#undef LOCTEXT_NAMESPACE