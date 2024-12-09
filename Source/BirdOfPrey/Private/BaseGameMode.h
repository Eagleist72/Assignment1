// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BaseGameMode.generated.h"
class AWorldCameraActor;
class UDataTable;
class ABasePowerUp;

UCLASS()
class ABaseGameMode : public AGameMode
{
	GENERATED_BODY()


public:
    // Constructor
    ABaseGameMode();

    // Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnEnemyFrom(FVector SpawnLocation);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void RespawnPlayer();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TrySpawnPowerUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetWorldScrollVelocity() const;

    //UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	AWorldCameraActor* GetWorldCameraActor() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetDistanceTravelled() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied();

protected:
    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float WorldScrollSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector2D MaxRelativePlayerOffset;

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AWorldCameraActor* WorldCameraActor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UDataTable* PlayerAgentInfoTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float RespawnDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float SpawnOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle StationarySpawnTimer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle ShipSpawnTimer;

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<ABasePowerUp*> PowerUpList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PickUpSpawnPercent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsGameOverScreen;
	
};
