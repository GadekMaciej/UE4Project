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
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Center)
		[
			// Inside lies a text block with these settings
			SNew(STextBlock)
			.ShadowColorAndOpacity(FLinearColor::Black)
			.ColorAndOpacity(FLinearColor::Yellow)
			.ShadowOffset(FIntPoint(-1, 1))
			// localized text to be translated with a generic name HelloSlateText
			.Text(LOCTEXT("HelloSlateText", "Hello, Slate!"))
		]
	];

}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE

