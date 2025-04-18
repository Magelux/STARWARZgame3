// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_CollisionObject_MO.generated.h"

UCLASS()
class RETURNTOALDERAAN_API ACPP_CollisionObject_MO : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_CollisionObject_MO();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Damage")
		float collisionDamage{ 0 };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
