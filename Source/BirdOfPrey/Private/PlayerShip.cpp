// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

void APlayerShip::ConstructionScript()
{
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed) const
{
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max) const
{
	return Dist;
}

void APlayerShip::CalcOutOfBoundsAdjustment()
{
	
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

bool APlayerShip::ShouldSpawnAIController() const
{
	return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently() const
{
	return false;
}