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
	int u = 0;
	int y;

	if (x % 10 == g4)
		u++;
	if ((x % 100) - (x % 10) == g3 * 10)
		u++;
	if ((u % 1000) - (x % 100) == g2 * 100)
		u++;
	if (x- ((u % 1000) - ((x % 100))) == g2 * 1000)
		u++;

}

int main()
{
}