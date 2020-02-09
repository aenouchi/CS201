/**
*money.cpp
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 5,2019
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double pennies = 0;
	double nickels = 0;
	double dimes = 0;
	double quarters = 0;
	double halfdollars = 0;
	double dollars = 0;

	double total = 0;

	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;
	
	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	
	cout << "How many half dollars do you have?" << endl;
	cin >> halfdollars;
	
	cout << "How many dollars do you have?" << endl;
	cin >> dollars;

	if (pennies != 1)
		cout << " You have " << pennies << " pennies" << endl;
	else
		cout << "You have 1 penny" << endl;









}