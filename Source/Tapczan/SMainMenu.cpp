// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenu.h"
#include "SlateOptMacros.h"

#define LOCTEXT_NAMESPACE "SMainMenu"
BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMainMenu::Construct(const FArguments& InArgs)
{
	OwnerHUD = InArgs._OwnerHUD;

	ChildSlot
	.VAlign(VAlign_Fill)
	.HAlign(HAlign_Fill)
	[

		SNew(SOverlay)
		+ SOverlay::Slot()
		.Padding(100)
		.VAlign(VAlign_Bottom)
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Fill)
			[
				SNew(SButton)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("PlayGame", "Play"))
					//.Text(TEXT("kocek"))
					// -M Later find out why this doesn't work instead of LOCTEXT above
				]
			]
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Fill)
			[
				SNew(SButton)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("Settings", "Settings"))
				]
			]
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Fill)
			[
				SNew(SButton)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("QuitGame", "Quit"))
				]
			]
		]
	];

}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE

