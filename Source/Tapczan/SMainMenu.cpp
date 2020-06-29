// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenu.h"
#include "Internationalization/Text.h"
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
		.Padding(200)
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GameTitle", "Tapczan Game"))
			]
			+ SVerticalBox::Slot()
			.VAlign(VAlign_Fill)
			.HAlign(HAlign_Fill)
			.AutoHeight()
			[
				SNew(SButton)
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("PlayGame", "Play"))
					.Font(FSlateFontInfo(FString("Roboto"), 20))
					//.Text(FText::FromString("String"))
					//-M Later find out why this doesn't work instead of LOCTEXT above
				]
			]
			+ SVerticalBox::Slot()
			.VAlign(VAlign_Fill)
			.HAlign(HAlign_Fill)
			.AutoHeight()
			[
				SNew(SButton)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("PlayGame", "Play"))
				]
			]
		]
	];

}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE

