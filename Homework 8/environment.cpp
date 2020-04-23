/**
*environment.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include "environment.hpp"

using std::cout;
using std::endl;
using std::cin;



Environment::Environment() :
	heater(false),
	temp(0)
{}

Environment::Environment(int t, bool h) :
	heater(h),
	temp(t)
{}

void Environment::iteration() const
{
	if (heater)
	{
		temp++;
	}
	else
	{
		temp--;
	}
}