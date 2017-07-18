// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidsClone.h"
#include "ShipPlayerController.h"
#include "ShipPlayer2D.h"

void AShipPlayerController::BeginPlay() {
	Super::BeginPlay();
}

void AShipPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	this->InputComponent->BindAction("Thrust", EInputEvent::IE_Pressed, this, &AShipPlayerController::OnThrustStart);
	this->InputComponent->BindAction("Thrust", EInputEvent::IE_Released, this, &AShipPlayerController::OnThrustEnd);
	this->InputComponent->BindAxis("Turn_Left", this, &AShipPlayerController::OnTurnLeft);
	this->InputComponent->BindAxis("Turn_Right", this, &AShipPlayerController::OnTurnRight);
}

void AShipPlayerController::OnThrustStart() {
	AShipPlayer2D* Ship = Cast<AShipPlayer2D>(GetCharacter());
	if (Ship) {
		Ship->StartThrust();
	}
}

void AShipPlayerController::OnThrustEnd() {
	AShipPlayer2D* Ship = Cast<AShipPlayer2D>(GetCharacter());
	if (Ship) {
		Ship->EndThrust();
	}
}

void AShipPlayerController::OnTurnLeft(float AxisValue) {
	AShipPlayer2D* Ship = Cast<AShipPlayer2D>(GetCharacter());
	if (Ship) {
		Ship->TurnLeft(AxisValue);
	}
}

void AShipPlayerController::OnTurnRight(float AxisValue) {
	AShipPlayer2D* Ship = Cast<AShipPlayer2D>(GetCharacter());
	if (Ship) {
		Ship->TurnRight(AxisValue);
	}
}