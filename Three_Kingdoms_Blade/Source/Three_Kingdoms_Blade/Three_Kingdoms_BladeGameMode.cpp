// Copyright Epic Games, Inc. All Rights Reserved.

#include "Three_Kingdoms_BladeGameMode.h"
#include "Three_Kingdoms_BladePlayerController.h"
#include "Three_Kingdoms_BladeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThree_Kingdoms_BladeGameMode::AThree_Kingdoms_BladeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AThree_Kingdoms_BladePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}