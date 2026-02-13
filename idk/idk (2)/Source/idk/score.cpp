// Fill out your copyright notice in the Description page of Project Settings.


#include "score.h"

#include "idkCharacter.h"
#include "Kismet/GameplayStatics.h"


void Uscore::NativeConstruct()
{
	Super::NativeConstruct();

	updatescore();		
}

void Uscore::updatescore()
{
	ACharacter* PC = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (PC)
	{
		if (AidkCharacter* idk = Cast<AidkCharacter>(PC))
		{
			
			UpdateText(idk->totalscore);
		}
	}
}

void Uscore::UpdateText(const int64 InScore)
{
	if (scoretext)
	{
		scoretext->SetText(FText::AsNumber(InScore));
	}
}
