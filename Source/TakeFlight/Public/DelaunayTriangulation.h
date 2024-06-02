// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DelaunayTriangulation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TAKEFLIGHT_API UDelaunayTriangulation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category="DelaunayTriangulation")
	TArray<FVector3f> CalculateDelaunay(TArray<FVector3f>& InputPoints);
};
