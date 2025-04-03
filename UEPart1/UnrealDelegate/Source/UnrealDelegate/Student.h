// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h"
#include "LessonInterface.h"
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class UNREALDELEGATE_API UStudent : public UPerson, public ILessonInterface
{
	GENERATED_BODY()

public:
	UStudent();

	virtual void DoLesson() override;

	// 딜리게이트에 등록할 함수.
	void GetNotification(const FString& InSchool, const FString& InNewCourseInfo);
};
