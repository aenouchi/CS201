/**
*Boxer.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 15,2019
*/
#include "Boxer.hpp"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int x;
	std::string message;

	cout << "Enter message:";
	cin >> message;
	cout << "Enter desired box size:";
	cin >> x;

	if (x < 0)
	{
		cout << "Error: Positive integers only";

	}
	else
	box(message, x);
}
