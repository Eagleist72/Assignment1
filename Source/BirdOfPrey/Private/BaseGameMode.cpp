// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

ABaseGameMode::ABaseGameMode()
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::SpawnEnemyFrom(FVector SpawnLocation)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

float ABaseGameMode::GetWorldScrollVelocity() const
{
	return 0.0f;
}

AWorldCameraActor* ABaseGameMode::GetWorldCameraActor() const
{
	return nullptr;
}

float ABaseGameMode::GetDistanceTravelled() const
{
	return 0.0f;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}
