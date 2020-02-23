/**
*tokenizer.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
using std::cout;
using std::endl;

int digit(int x)
{
	int digit = 1;
	if (x == 0)
		return 0;

	for (int i = 10; i < x; i + 10)
	{
		digit++;
		if (x <= 10 * i)
			break;
	}
	return digit;
}