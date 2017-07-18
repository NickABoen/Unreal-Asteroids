// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "ShipPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDSCLONE_API AShipPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

	UFUNCTION()
	void OnThrustStart();

	UFUNCTION()
	void OnThrustEnd();

	UFUNCTION()
	void OnTurnLeft(float AxisValue);

	UFUNCTION()
	void OnTurnRight(float AxisValue);
};
