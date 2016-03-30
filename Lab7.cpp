// Lab7.cpp : Defines the entry point for the console application.
// AUTHOR Duncan Reeves. A-3, CP2, C++

#include "stdafx.h"
#include "Vector_of_integers.h"

using namespace std;

int main()
{
	Vector_of_integers myVector = Vector_of_integers(3);
	cout << myVector.capacity() << endl;
	for (int i = 0; i < 5; i++)
	{
		myVector.push_back(i);
	}
    return 0;
}

