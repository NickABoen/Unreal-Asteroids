// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidsClone.h"
#include "ShipPlayer.h"


// Sets default values
AShipPlayer::AShipPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShipPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShipPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

