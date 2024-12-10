// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon()
{
}

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int32 ShotNumber) const
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire() const
{
	return false;
}
