#include "stdafx.h"
#include "Vector_of_integers.h"

Vector_of_integers::Vector_of_integers()
{
	myCapacity = DEFAULT_CAPACITY;
	mySize = 0;
	vecArrayPoint = new int[myCapacity];
}

Vector_of_integers::Vector_of_integers(unsigned int cap)
{
	myCapacity = cap;
	mySize = 0;
	vecArrayPoint = new int[myCapacity];
}

Vector_of_integers::~Vector_of_integers()
{
}

int Vector_of_integers::size()
{
	return mySize;
}

int Vector_of_integers::capacity()
{
	return myCapacity;
}

void Vector_of_integers::clear()
{
}

void Vector_of_integers::push_back(int value)
{
	if (mySize == myCapacity)
	{
		int *temp = vecArrayPoint;
		myCapacity = myCapacity * 2;
		vecArrayPoint = new int[myCapacity];
		for (int i = 0; i < mySize; i++)
		{
			vecArrayPoint[i] = temp[i];
		}
		//DELETE ARRAY THAT TEMP IS POINTING TOO!!!!
		delete temp; //???????????????????????????????
	}
	vecArrayPoint[mySize] = value;
	mySize++;
}

int Vector_of_integers::at(unsigned int n)
{
	if (n > mySize)
	{
		throw ExceptionClass(OUT_OF_BOUNDS);
	}
	if (n < 1)
	{
		throw ExceptionClass(ZERO_INDEX);
	}
	if (n < 1)									//Do before call, as unsigned int will not work
	{											//
		throw ExceptionClass(NEGATIVE_INDEX);	//
	}											//

	return vecArray[(n-1)];
}
