// Fill out your copyright notice in the Description page of Project Settings.


#include "TapczanController.h"

ATapczanController::ATapczanController()
{

}

void ATapczanController::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));
	Super::BeginPlay();
	//UserInterface = CreateWidget<UUWMainMenu>(this, UUWMainMenu::StaticClass());
	//UserInterface->AddToViewport(10000);
	//UserInterface->SetVisibility(ESlateVisibility::Visible);
}
