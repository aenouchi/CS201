
/**
*Source.cpp
*Lab 20
*Aaron Nouchi
*CS 201
*Jon Genetti
* March 25,2020
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	vector <double> ang;
	for (double i = 0; i < 180; i += 5) //increments of degrees
	{
		ang.push_back(i);
	}

	vector <double> rad;
	for (double x : ang)
	{
		rad.push_back(x * (M_PI / 180)); //Converts to radians
	}
}

