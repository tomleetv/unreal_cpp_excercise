// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class UNREAL_CPP_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Pitch(float AxisValue);

	void Roll(float AxisValue);

	void Fire();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UBoxComponent* Box;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UStaticMeshComponent* P38;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UStaticMeshComponent* Left;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UStaticMeshComponent* Right;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UFloatingPawnMovement* Movement;

};
