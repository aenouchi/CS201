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
		cout << "You have " << pennies << " pennies" << endl;
	else
		cout << "You have 1 penny" << endl;

	if (nickels != 1)
		cout << "You have " << nickels << " nickels" << endl;
	else
		cout << "You have 1 nickel" << endl;

	if (dimes != 1)
		cout << "You have " << dimes << " dimes" << endl;
	else
		cout << "You have 1 dime" << endl;

	if (quarters != 1)
		cout << "You have " << quarters << " quarters" << endl;
	else
		cout << "You have 1 quarter" << endl;

	if (halfdollars != 1)
		cout << "You have " << halfdollars << " half dollars" << endl;
	else
		cout << "You have 1 half dollar" << endl;

	if (dollars != 1)
		cout << "You have " << dollars << " dollars" << endl;
	else
		cout << "You have 1 dollar" << endl;


	total = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfdollars * 50) + (dollars * 100);

	if (total < 100) {
		cout << " You have " << total << " cents" << endl;
	}

	else (total /= 100); {
		cout << " You have $" << total << endl;
	}
}