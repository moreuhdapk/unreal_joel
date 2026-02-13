// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "score.generated.h"


/**
 * 
 */
UCLASS()
class IDK_API Uscore : public UUserWidget
{
	GENERATED_BODY()

	public:

	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite , meta = (BindWidgetOptional))
	UTextBlock* scoretext;
	

	UFUNCTION(blueprintCallable)
	void updatescore();

	UFUNCTION()
	void UpdateText(const int64 InScore);

	
	
};
