// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class LOGPRINT_API GameDebugHelper
{
public:
	GameDebugHelper();
	~GameDebugHelper();
};

namespace Debug
{
	static void PrintMessage(FString Message, float ShowTime = 2.0f, FColor Color = FColor::MakeRandomColor(),
	                         int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, ShowTime, Color, Message);
			UE_LOG(LogTemp, Warning, TEXT("Message:%s"), *Message);
		}
	}
}
