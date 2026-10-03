// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "FirstPersonCharCPP.h"
#include "WeaponCompCPP.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTZOMB_API UWeaponCompCPP : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite) AFirstPersonCharCPP* m_playerRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_weaponDamage = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FString m_weaponName = FString("1911");
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int m_stock = 8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int m_reserve = 32;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int m_clip = 8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool m_reloading = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_reloadTime = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float m_range = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle m_timerHandle;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite) FDataTableRowHandle m_weapon;

	UFUNCTION(BlueprintCallable) bool m_Shoot();
	UFUNCTION(BlueprintCallable) void m_Reload();
	UFUNCTION(BlueprintCallable) void m_Initialise();


private:


	
};
