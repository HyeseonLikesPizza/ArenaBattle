// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"


AABGameMode::AABGameMode() {

	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
	
	// 블루프린트 애셋을 C++에 가져오는 방법
	/*
	static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));
	if (BP_PAWN_C.Succeeded())
	{
		DefaultPawnClass = BP_PAWN_C.Class;
	}
	*/
}

void AABGameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}
