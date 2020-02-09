/**
*money.cpp
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 5,2019
*/
#include <iostream>
using namespace std;

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int pennies = 1;
	int nickels = pennies / 5;
	int dimes = pennies / 10;
	int quarters = pennies / 25;
	int halfdollars = pennies / 50;
	int dollars = pennies / 100;

	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	pennies = pennies % 1;
	
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	nickels = pennies % 5;
	
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;
	dimes = pennies % 10;

	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	quarters = pennies % 25;

	cout << "How many halfdollars do you have?" << endl;
	cin >> halfdollars;
	halfdollars = pennies % 50;


	

}

