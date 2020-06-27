// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "Widgets/SCompoundWidget.h"
#include "TapczanHud.h"

/**
 * 
 */
class TAPCZAN_API SMainMenu : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainMenu)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class ATapczanHud>, OwnerHUD)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
private:
	TWeakObjectPtr<class ATapczanHud> OwnerHUD;
};
