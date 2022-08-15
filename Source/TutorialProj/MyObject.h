// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TUTORIALPROJ_API UMyObject : public UObject
{
	GENERATED_BODY()
    //constructor
public:
    UMyObject();
    
    UPROPERTY(BlueprintReadWrite)
    float myFloat{};
    
    UFUNCTION(BlueprintCallable)
    void myFunction();
        
	
};
