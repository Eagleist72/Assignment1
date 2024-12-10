// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"

ABasePlayerController::ABasePlayerController()
{
	bDiedWhileFiring = false;
}

FVector2D ABasePlayerController::CalcScreenDimensions()
{
	return FVector2D();
}

void ABasePlayerController::OnPlayerDeath(AController* Killer)
{
	
}


