// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SlateBasics.h"
#include "TapczanHud.generated.h"

class SMainMenu;

/**
 * 
 */
UCLASS()
class TAPCZAN_API ATapczanHud : public AHUD
{
	GENERATED_BODY()

public:

	TSharedPtr<SMainMenu> MainMenu;

	void BeginPlay();
	
};
