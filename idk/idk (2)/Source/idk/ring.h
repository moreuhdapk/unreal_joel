// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ring.generated.h"

UCLASS()
class IDK_API Aring : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aring();
	

	UPROPERTY(editAnywhere, BlueprintReadWrite)
	int64 score = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
