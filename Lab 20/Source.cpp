
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
using std::setprecision;

int main()
{
	vector <double> ang;
	for (double i = 0; i <= 180; i += 5) //increments of degrees
	{
		
		ang.push_back(i);

	}

	vector <double> rad;
	for (double x : ang)
	{
		
		rad.push_back(x * (M_PI / 180)); //Converts to radians

	}
	
	for (int i = 0; i < rad.size(); i++)
	{
		
		cout << setprecision(8) << "angle: " << ang[i] << "\n cos:" << cos(rad[i]) << endl;

	}
}

