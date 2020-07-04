// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UWMainMenu.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TapczanController.generated.h"

class UUWMainMenu;

UCLASS()
class TAPCZAN_API ATapczanController : public APlayerController
{
	GENERATED_BODY()

	ATapczanController();
	void BeginPlay();

	UPROPERTY()
	UUWMainMenu* UserInterface;
};
