// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

// Declare Structure.
USTRUCT()
struct FStudentData
{
	GENERATED_BODY()

	FStudentData()
		: Order(-1), Name(TEXT("ȫ�浿"))
	{
	}

	FStudentData(int32 InOrder, const FString& InName)
		: Order(InOrder), Name(InName)
	{
	}

	// TSet ����ü�� ����ϱ� ���� �Լ� �߰�.
	bool operator==(const FStudentData& InOther) const
	{
		//return Order == InOther.Order;
		return Name == InOther.Name;
	}

	friend FORCEINLINE int32 GetTypeHash(const FStudentData& InStudentData)
	{
		return GetTypeHash(InStudentData.Order);
	}

	UPROPERTY()
	int32 Order = -1;

	UPROPERTY()
	FString Name;
};

/**
 * 
 */
UCLASS()
class UNREALCONTAINER_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

private:
	TArray<FStudentData> StudentData;

	UPROPERTY()
	TArray<TObjectPtr<class UStudent>> Students;

	TMap<int32, FString> StudentMap;
};
