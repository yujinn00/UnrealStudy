// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	Super::Init();

	// TArray.
	TArray<int32> IntArray;

	// TArray에 자료 추가.
	for (int ix = 0; ix < 10; ++ix)
	{
		IntArray.Add(ix + 1);
	}

	// 출력.
	for (const auto& Item : IntArray)
	{
		UE_LOG(LogTemp, Log, TEXT("배열 값: %d"), Item);
	}

	// 조건 설정해서 삭제.
	IntArray.RemoveAll([](int32 Val) { return Val % 2 == 0; });
	IntArray += { 2, 4, 6, 8, 10 };

	// 출력.
	for (const auto& Item : IntArray)
	{
		UE_LOG(LogTemp, Log, TEXT("배열 값: %d"), Item);
	}

	// 배열 통복사.
	int32 CArray[10];
	FMemory::Memcpy(
		CArray,
		IntArray.GetData(),
		sizeof(int32) * IntArray.Num()
	);

	for (const auto& Item : CArray)
	{
		UE_LOG(LogTemp, Log, TEXT("Item: %d"), Item);
	}

	// 합계.
	int32 SumByAlgo = Algo::Accumulate(IntArray, 0);
	UE_LOG(LogTemp, Log, TEXT("SumByAlgo: %d"), SumByAlgo);

	// TSet.
	TSet<int32> IntSet;

	// TSet에 자료 추가.
	for (int ix = 0; ix < 10; ++ix)
	{
		IntSet.Add(ix + 1);
	}

	IntSet.Remove(2);
}
