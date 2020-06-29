// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UWMainMenu.generated.h"

class UTextBlock;
class UVerticalBox;
class UButton;

UCLASS()
class TAPCZAN_API UUWMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UUWMainMenu(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;
	UPROPERTY(meta = (BindWidget))
	UButton* OptionsButton;
	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MessageOfTheDayText;

	void NativeConstruct();

	UFUNCTION()
	void TestFunction();
	UFUNCTION()
	void LoadLevel();

private:
	void HideMainMenu();
};
