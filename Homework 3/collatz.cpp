/**
*collatz.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 15,2019
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void collatz(int x)
{
	while (x)
	{
		if (x == 1)
		{
			cout << x;
			break;
		}
		else if (x % 2 == 0)
		{
			cout << x << ", ";
			x = x / 2;
		}
		else
		{
			cout << x << ", ";
			x = x * 3 + 1;
		}
	}

}
