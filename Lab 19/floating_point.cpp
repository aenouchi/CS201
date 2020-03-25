/**
*floating_point.cpp
*Lab 19
*Aaron Nouchi
*CS 201
*Jon Genetti
* March 23,2020
*/

#define _USE_MATH_DEFINES // Allows M_PI for pi
#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

vector<double> degreesToRadians(int degrees) {
	vector<double> radians;
	for (int degree = 0; degree <= degrees; ++degree) {
		radians.push_back(degree / 180 * M_PI);
	}
	return radians;
}
