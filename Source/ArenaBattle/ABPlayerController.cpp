// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AABPlayerController::Possess(APawn * aPawn)
{

	Super::Possess(aPawn);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}

