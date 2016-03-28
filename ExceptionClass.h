#pragma once
#include <iostream>

#define outOfBounds 1
#define negativeIndex 2

class ExceptionClass
{
private:
	int errorCode;
public:
	ExceptionClass();
	ExceptionClass(int);
	void dealWithError();
};