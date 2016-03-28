#pragma once
#include "ExceptionClass.h"

#define defaultCapacity 2

class Vector_of_integers
{
private:
	int myCapacity;
	int vecArray[defaultCapacity];
	int *vecArrayPoint = vecArray;
	int mySize;
public:
	Vector_of_integers();
	Vector_of_integers(unsigned int);
	~Vector_of_integers();
	int size();
	int capacity();
	void clear();
	void push_back(int);
	int at(unsigned int);
};