/**
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*January 28,2019
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

int main()
	{
		double mile; 
			cout << "Input the miles to be converted to km (positive numbers only)" << endl;
			cin >> mile;
			if (mile >= 0) {
				cout << (mile * 1.609) << " kilometers" << endl;
			}
			else if (mile < 0)
				{
				cout << "I said POSITIVE numbers" << endl;
			}

	}