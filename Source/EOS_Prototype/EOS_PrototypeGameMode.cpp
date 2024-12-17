// Copyright Epic Games, Inc. All Rights Reserved.

#include "EOS_PrototypeGameMode.h"
#include "EOS_PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEOS_PrototypeGameMode::AEOS_PrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
