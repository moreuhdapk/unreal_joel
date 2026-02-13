// Fill out your copyright notice in the Description page of Project Settings.


#include "timer.h"

#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void Utimer::NativeConstruct()
{
	Super::NativeConstruct();

	UpdateText(seconds);
}

void Utimer::updateTimer()
{
	UpdateSeconds();

	UpdateText(seconds);
}

void Utimer::UpdateText(const int64 InSeconds)
{
	if (timerText)
	{
		timerText->SetText(FText::AsNumber(InSeconds));
	}
}

void Utimer::UpdateSeconds()
{
	seconds--;

	if (seconds <= 0)
	{
		BP_gameOver();
	}
}

