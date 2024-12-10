// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseProjectile.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	// Constructor
	AProjectileWeapon();

	// Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int32 ShotNumber) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire() const;

	// Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	int32 NumShots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ;
};
