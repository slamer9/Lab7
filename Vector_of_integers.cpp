#include "stdafx.h"
#include "Vector_of_integers.h"

Vector_of_integers::Vector_of_integers()
{
	myCapacity = defaultCapacity;
}

Vector_of_integers::Vector_of_integers(unsigned int cap)
{
	myCapacity = cap;
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

void Vector_of_integers::push_back(int)
{

}

int Vector_of_integers::at(unsigned int n)
{
	if (n > mySize)
	{
		throw ExceptionClass(outOfBounds);
	}
	if (n < 1)
	{
		throw ExceptionClass(negativeIndex);
	}

	return vecArray[(n-1)];
}
