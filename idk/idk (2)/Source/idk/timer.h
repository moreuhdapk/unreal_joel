// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "timer.generated.h"

/**
 * 
 */
UCLASS()
class IDK_API Utimer : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 seconds = 0;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	UTextBlock* timerText = nullptr;
	
	
	UFUNCTION(BlueprintCallable)
	void updateTimer();

	UFUNCTION()
	void UpdateText(const int64 InSeconds);

	UFUNCTION()
	void UpdateSeconds();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_gameOver();
};
