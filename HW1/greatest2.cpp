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
	int greatest;
	int counter = 0;
	
	cout << "Enter sequence of positive integers, ending with zero. I will print the greatest positive integer." << endl;
	cin >> num;

	while (num > 0)
	{
		cout << "Enter sequence of positive integers, ending with zero. I will print the greatest positive integer." << endl;
		cin >> num;
		
		if (counter == 0)
		{
			greatest = num;

		}
		else
		{
			if (num > greatest)
				greatest = num;
		}
		counter++;
	}
	cout << "The greatest number entered " << num << endl;
}