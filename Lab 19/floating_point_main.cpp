/**
*floating_point_main.cpp
*Lab 19
*Aaron Nouchi
*CS 201
*Jon Genetti
* March 23,2020
*/

#include <iostream>
#include <cmath>
#include <vector>
#include "floating_point.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	vector<int> v{ 1,2,3,4,5 };
	for (int i = 2; i < v.size(); ++i)
		v[i]++;
	cout << endl; 

}