/**
*Boxer.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 15,2019
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Boxer.hpp"

void box(std::string message, int x)
{
	int width;
	width = message.size() + 2 + (2 * x);

	char print = '*';

	for (int i = 0; i < x; i++) //For top row of box
	{
		for (int u = 0; u < width; u++)
		{
			cout << print;
		}
		cout << "\n";
	}
	for (int i = 0; i < x; i++) //First half of mid rows
	{
		cout << print;
	}
	for (int i = 0; i < width - (2 * x); i++)
	{
		cout << " ";
	}
	for (int i = 0; i < x; i++)
	{
	cout << print;
	}
	cout << "\n";

	for (int i = 0; i < x; i++) // For second mid portion
	{
		cout << print;
	}