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
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;



int main()
{
	int n;
	int m = 0;
	vector <int> l;
	int greatest = 0;
	
	cout << "Enter sequence of positive integers, ending with zero. I will print the greatest positive integer." << endl;
	cin >> n;
	while (n > m) {
		cout << "Enter positive integer (0 to end)" << n << endl;
		cin >> n;
		l.push_back(n);
		for (int i = 0; i < l.size(); i++) {
			if (n > greatest)
			{
				n = greatest;
			}
			}
	}
	if (n < m)
	{
		cout << "no positive inputs detected" << endl;
	}
}

