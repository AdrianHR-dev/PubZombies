// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCompCPP.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UWeaponCompCPP::m_Initialise()
{
	USoundCue* bulletAudioCue;
	UAudioComponent* bulletAudioComponent;

	static ConstructorHelpers::FObjectFinder<USoundCue> bulletCue(TEXT("'Content\FPWeapon\AudioFirstPersonTemplateWeaponFire02'"));

}

bool UWeaponCompCPP::m_Shoot()
{
	//Check for remaining ammo in clip
	if (m_clip > 0)
	{
		//Decrease ammo count
		m_clip = m_clip - 1;

		FVector start= UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();

		FVector end = start + (UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetTransformComponent()->GetForwardVector() * m_range);
		
		FHitResult hit;

		bool enemyHit = UKismetSystemLibrary::SphereTraceSingle(this, start, end, 1.0f, UEngineTypes::ConvertToTraceType(ECC_EngineTraceChannel1), false, {}, EDrawDebugTrace::Persistent, hit, true);

		return true;
	}

	//Otherwise reload gun if ammo remains
	else if(m_reloading == false && m_reserve > 0)
	{
		m_reloading = true;

		GetWorld()->GetTimerManager().SetTimer(m_timerHandle, this, &UWeaponCompCPP::m_Reload, m_reloadTime, false);

	}

	return false;
}

void UWeaponCompCPP::m_Reload()
{
	//Check if enough ammo remains for a full reload, or if a partial reload must be performed
	if (m_reserve >= m_stock)
	{
		m_reserve = m_reserve - m_stock;
		m_clip = m_stock;
	}

	else
	{
		m_clip = m_reserve;
		m_reserve = 0;
	}

	m_reloading = false;
}

