// Lab7.cpp : Defines the entry point for the console application.
// AUTHOR Duncan Reeves. A-3, CP2, C++

#include "stdafx.h"
#include "Vector_of_integers.h"

using namespace std;

int main()
{
	Vector_of_integers myVector = Vector_of_integers(3);
	Vector_of_integers myVector2 = Vector_of_integers();

	cout << myVector.capacity() << endl;
	cout << myVector2.capacity() << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		myVector.push_back(i);
		cout << myVector.at(i) << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < 12; i++)
	{
		myVector2.push_back(i);
		cout << myVector2.at(i) << endl;
	}
	cout << endl << endl;

	cout << myVector.capacity() << endl;
	cout << myVector2.capacity() << endl;
    return 0;
}

