/**
*quadratic.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 15,2019
*/

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

double quadpoint(int a, int b, int c)
{
	double squareroot;
	squareroot = (b * b) - (4 * a * c);
	if (squareroot < 0)
		return 1.234568;
	else
		squareroot = sqrt(squareroot);

	double answer;
	answer = -b + squareroot;
	answer = answer / (2 * a);
	return answer;
}

int main 
