// Fill out your copyright notice in the Description page of Project Settings.


#include "TapczanHud.h"
#include "Widgets/SWeakWidget.h"
#include "Engine.h"
#include "SMainMenu.h"
#include "Runtime/Engine/Classes/Engine/Engine.h" 

void ATapczanHud::BeginPlay()
{
	MainMenu = SNew(SMainMenu).OwnerHUD(this);
	if (GEngine)
	{
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MainMenu.ToSharedRef()));

		MainMenu->SetVisibility(EVisibility::Visible);
	}
}