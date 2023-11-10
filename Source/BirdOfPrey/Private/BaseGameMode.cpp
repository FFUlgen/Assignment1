// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"
#include "BasePowerUp.h"

ABaseGameMode::ABaseGameMode()
{
}

void ABaseGameMode::StartGame(bool bSuccess)
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<class ABaseGameAgent*> ClassList)
{
}



void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}

void ABaseGameMode::BeginPlay()
{
}

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}


void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}


