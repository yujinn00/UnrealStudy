// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h"				// #include "Teacher.generated.h" 아래다 작성하면 컴파일 실패.
#include "Teacher.generated.h"	// 이 코드는 무조건 아래다 배치 ?

/**
 * 
 */
UCLASS()
class OBJECTREFLECTION_API UTeacher : public UPerson
{
	GENERATED_BODY()
	
public:
	UTeacher();

	virtual void DoLesson() override;

private:
	UPROPERTY()
	int32 Id;
};
