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
	int i, d, r; //
	cout << "How tall would you like your diamond?" << endl;
	cin >> r;
	for (i = 0; i <= r; i++)
	{
		for (d = 1; d <= r - i; d++)
			cout << " ";
		for (d = 1; d <= 2 * i - 1; d++)
			cout << "#";
		cout << endl;
	}
	for(i=r-1;i>=1;i--)
	{
	for (d = 1; d <=r-i; d++)
		cout << " ";
	for (d = 1; d<=2*i - 1; d++)
		cout << "#";
		cout << endl;;

	}
}