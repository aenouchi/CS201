/**
*Source.cpp
*Lab 28
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 14,2020
*/

#include<iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <vector>
#include <fstream>


using std::ofstream;
using std::cout;
using std::endl;

void tenprint()
{
	int count = 1;
	ofstream zw ("TEXT_DOCUMENT.txt");

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			zw << count << " ";

			count++;
		}

		zw << endl;
	}
}



int main()
{
	tenprint();
}