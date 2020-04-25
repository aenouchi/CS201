/**
*home.hpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <stdlib.h>

#include "Agent.Hpp" 
#ifndef home_HPP
#define home_HPP 

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::mt19937;

class Home
{
	vector<Environment> rooms;
	Agent vacuum;

public:
	Home();
	Home(int r);

	void turn();
};
#endif

