// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"


class UTextBlock;
class UVerticalBox;
class UButton;

/**
 * 
 */
UCLASS()
class TAPCZAN_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UMenu(const FObjectInitializer& ObjectInitializer);

	//virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;
	UPROPERTY(meta = (BindWidget))
	UButton* OptionsButton;
	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MessageOfTheDayText;

};
