// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float Damage)
{
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel() const
{
	return static_cast<ECollisionChannel>(0);
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget() const
{
	return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile() const
{
	return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

