// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/PointLightComponent.h"
#include "CPPComponent.generated.h"

UCLASS()
class CPP_BP_API ACPPComponent : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// PrintStringä÷êîÇÃDurationÇ…ê›íËÇ∑ÇÈïœêî
	const float Duration = 10.0f;

	// PrintStringä÷êîÇÃTextColorÇ…ê›íËÇ∑ÇÈïœêî
	const FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0);

public:
	// Scene Component
	UPROPERTY(EditAnywhere)
	TObjectPtr<USceneComponent> DefaultSceneRoot;

	// StaticMesh Component
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	// Arrow Component
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> Arrow;

	// PointLightComponent Component
	UPROPERTY(EditAnywhere)
	TObjectPtr<UPointLightComponent> PointLight;

	// Sets default values for this actor's properties
	ACPPComponent();

};