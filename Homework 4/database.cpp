/**
*database.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
#include "database.hpp"
using std::cout;
using std::endl;

void create(std::string nn, std::string nc)
{
	name.push_back(nn);
	color.push_back(nc);
	ref.push_back(ref.size() + 1);

}

void read(std::string g)
{
	bool flag = false;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == g)
		{
			flag = true;
			cout << "Name: " << name[i] << name[i] << "\nFavorite Color: " << color[i] << "\nSlot" << i;
		}
	}
	if (flag == false)
	{
		for (int i = 0; i < color.size(); i++)
		{
			if (color[i] == g)
			{
				flag = true;
				cout << "Name: " << name[i] << "\nFavorite Color: " << color[i] << "\nSlot: " << i;
			}
		}
	}
	if (flag == false)
	{
		cout << "Error: No input found.";
	}
}

void read(int g)
{
	if (g > ref.size() || g < 0)
	{
		cout << "Error: slots do not exist in given range";
	}
	bool flag = false;
	for (int i = 0; i < ref.size(); i++)
	{
		if (ref[i] == g)
		{
			flag = true;
			cout << "Name: " << name[i] << "\nFavorite Color: " << color[i] << "\nSlot: " << i;
		}
	}
	if (flag == false)
	{
		cout << "Error: No input found.";
	}
}

void update(int x, std::string n, std::string c)
{
	if (x > ref.size() || x < 0)
	{
		cout << "Error: slots do not exist in given range";
	}
	name[x] = n;
	color[x] = x;
}

