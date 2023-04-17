// Copyright Epic Games, Inc. All Rights Reserved.

#include "STemple01GameMode.h"
#include "STemple01Character.h"
#include "UObject/ConstructorHelpers.h"

ASTemple01GameMode::ASTemple01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
