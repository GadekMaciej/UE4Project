// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Engine/Engine.h"
#include "UWMainMenu.h"

UUWMainMenu::UUWMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UUWMainMenu::NativeConstruct()
{
	Super::NativeConstruct();
	StartButton->OnClicked.AddDynamic(this, &UUWMainMenu::LoadLevel);
}

void UUWMainMenu::TestFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
}

void UUWMainMenu::LoadLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("Level1"), true, FString());
	UUWMainMenu::TestFunction();
	HideMainMenu();
}

void UUWMainMenu::HideMainMenu()
{
	this->SetVisibility(ESlateVisibility::Hidden);
}
