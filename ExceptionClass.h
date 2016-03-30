#pragma once
#include <iostream>

#define OUT_OF_BOUNDS 1
#define NEGATIVE_INDEX 2
#define ZERO_INDEX 3

class ExceptionClass
{
private:
	int errorCode;
public:
	ExceptionClass();
	ExceptionClass(int);
	void dealWithError();
};