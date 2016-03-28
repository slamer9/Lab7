#include "stdafx.h"
#include "ExceptionClass.h"

ExceptionClass::ExceptionClass(int e)
{
	errorCode = e;
}

void ExceptionClass::dealWithError()
{
	switch (errorCode)
	{
	case outOfBounds: std::cout << "That index is out of bounds, try a smaller number." << std::endl;
	default:
		break;
	}
	if (errorCode == outOfBounds)
	{
		std::cout << "That index is out of bounds, try a smaller number." << std::endl;
	}
}
