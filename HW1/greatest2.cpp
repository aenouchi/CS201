/**
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*January 28,2019
*/

#include <iostream>

using namespace std;


int main()
{
	int num = 0;
	int greatest = 0;
	int counter = 0;

	cout << "Enter sequence of positive integers, ending with zero. I will print the greatest positive integer." << endl;
	cin >> num;

	while (num > 0) // As long as the inputed number is less than 0.
	{
		cout << "Enter sequence of positive integers, ending with zero. I will print the greatest positive integer." << endl; //message is repeated
		cin >> num;

		if (counter == 0) // If counter equals to zero the greatest number is the number displayed
		{
			greatest = num;

		}
		else // If number is bigger than current greatest, it will be replaced
		{
			if (num > greatest)
				greatest = num;
		}
		counter++;

		cout << "The greatest number entered " << greatest << endl;
	}
	if (num < 0) { //Error message
		cout << "no positive inputs detected" << endl;
	}
}