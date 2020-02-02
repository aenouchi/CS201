/**
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*January 28,2019
*/

#include <iostream>
#include <cmath>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int i, d, r; // i counts rows down, d is how many blank spaces needed, r rows for top half of diamond
	cout << "How tall would you like your diamond?" << endl;
	cin >> r;
	for (i = 0; i <= r; i++) // This for loop determines how many vertical rows there are in the top half of the diamond.
	{
		for (d = 1; d <= r - i; d++) // This for loop determines the amount of empty space needed for the top half of the diamond.
			cout << " ";
		for (d = 1; d <= 2 * i - 1; d++)// This for loop determines the amount of "#"s needed for the top half of the diamond.
			cout << "#";
		cout << endl;
	}
	for(i=r-1;i>=1;i--)  // This for loop determines how many vertical rows there are in the top bottom half of the diamond.
	{
		for (d = 1; d <=r-i; d++) // This for loop determines the amount of empty space needed for the bottom half of the diamond.
			cout << " ";
		for (d = 1; d<=2*i - 1; d++) // This for loop determines the amount of "#"s needed for the bottom half of the diamond.
		cout << "#";
		cout << endl;;

	}
}