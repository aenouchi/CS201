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

double quadplus(int a, int b, int c) // Squareroot function +
{
	double squareroot;
	squareroot = (b * b) + (4 * a * c);
	if (squareroot < 0)
		return 1.234568;
	else
		squareroot = sqrt(squareroot);

	double answer;
	answer = -b + squareroot;
	answer = answer / (2 * a);
	return answer;
}

double quadminus(int a, int b, int c) // Squareroot function -
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

int main()
{
	double a;
	double b;
	double c;

	cout << "The quadratic equation is (-b +- SQUARE ROOT (b^2 -4ac))/2a" << endl;
	cout << "For your quadratic equation, enter an 'a' value" << endl;
	cin >> a;
	cout << "For your quadratic equation, enter an 'b' value" << endl;
	cin >> b;
	cout << "For your quadratic equation, enter an 'c' value" << endl;
	cin >> c;
}
