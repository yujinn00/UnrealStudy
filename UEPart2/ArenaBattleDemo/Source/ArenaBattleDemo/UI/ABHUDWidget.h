// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ABHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEDEMO_API UABHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UABHUDWidget(const FObjectInitializer& ObjectInitializer);
 
protected:
	virtual void NativeConstruct() override;
};
