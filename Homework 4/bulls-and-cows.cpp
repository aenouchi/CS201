/**
*bulls-and-cows.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
#include <math.h>

void check(int x, int g1, int g2, int g3, int g4)
{
	int c = 0;
	int b;

	if (x % 10 == g4)
		c++;
	if ((x % 100) - (x % 10) == g3 * 10)
		c++;
	if ((c % 1000) - (x % 100) == g2 * 100)
		c++;
	if (x- ((x % 1000) - ((x % 100))) == g2 * 1000)
		u++;
	y = 4 - c;

	if (c !=0 && b != 0)
}

int main()
{
}