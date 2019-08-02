// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(MyFunctionalTest, "BasicFPS.FailingTest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::ProductFilter)
bool MyFunctionalTest::RunTest(const FString& Parameters)
{

	AddError(FString::Printf(TEXT("Nope. Fail.")));

	return true;
}


IMPLEMENT_SIMPLE_AUTOMATION_TEST(MyFunctionalTest_2, "BasicFPS.SuccessfullTest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::ProductFilter)
bool MyFunctionalTest_2::RunTest(const FString& Parameters)
{
	return true;
}