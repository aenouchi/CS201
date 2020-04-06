/**
*random-map.cpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 4,2020
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
#include <random>
#include <utility>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;

int RandomBetweenU(int first, int last)
{
	random_device ran;
	mt19937 gen(ran());
	uniform_int_distribution<int> dis(first, last);
	return dis(ran);
}

int RandomBetweenN(double first, double last)
{
	random_device ran;
	mt19937 gen(ran());
	normal_distribution<double> dis(first, last);
	return dis(gen);
}

int RandomBetween(int first, int last)
{
	return rand() % last + first;
}

int main()
{

}