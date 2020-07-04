// Fill out your copyright notice in the Description page of Project Settings.


#include "TapczanHud.h"
#include "UWMainMenu.h"
#include "Widgets/SWeakWidget.h"
#include "Blueprint/UserWidget.h"
#include "Engine.h"
#include "SMainMenu.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h" 

void ATapczanHud::BeginPlay()
{
	KLOCEK = CreateWidget<UUWMainMenu>(GetWorld(), UserInterface);
	if (UserInterface)
	{
		KLOCEK->AddToViewport(0);
	}
	//MainMenu = SNew(SMainMenu).OwnerHUD(this);
	//if (GEngine && GEngine->GameViewport)
	//{
	//	GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MainMenu.ToSharedRef()));

	//	MainMenu->SetVisibility(EVisibility::Visible);
	//}
}