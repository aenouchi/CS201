/**
*shopping.hpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 9,2020
*/

#ifndef shoping_hpp
#define shoping_hpp

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;

struct record
{
	void setPrice(double d)
	{
		unitPrice = d;
	}

	void setUnits(int u)
	{
		units = u;
	}

	int getUnits()
	{
		return units;
	}

	double getPrice()
	{
		return unitPrice;
	}

	double cost()
	{
		return unitPrice * units;
	}

private:
	double unitPrice = 0;
	int units = 0;
};

void add(record r, int i) {

};

void remove(record r, int i) {

};

#endif

