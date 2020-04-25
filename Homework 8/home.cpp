/**
*home.cpp
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
#include "Home.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::mt19937;

Home::Home() :
	vacuum()
{
	rooms.push_back(Environment());
}

Home::Home(int r)
{
	for (int i = 0; i < r; i++)
	{
		
		int c = rand() % 2 + 1;

		if (c == 1)
		{
			//a clean room
			rooms.push_back(Environment(true));
		}
		else
		{
			//a dirty room
			rooms.push_back(Environment(false));
		}
	}
}

void Home::turn()
{

}