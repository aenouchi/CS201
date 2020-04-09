/**
*main.cpp
*Lab 25
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 8,2020
*/
//1, 2, 3, 5, 6, 7, 4, 8, 77, 9
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using std::cout;
using std::endl;
using std::vector;
using std::pair;

int main()
{
	vector <int> set1 { 4, 5, 2, 1, 23, 63, 45, 99, 34, 9 };
	vector <int> set2{ 4, 5, 2, 1, 23, 63, 45, 99, 34, 8 };
	pair <int, int> same;

	auto nu = mismatch(set1.begin(), set1.end(), set2.begin());
	same.first = *nu.first;
	same.second = *nu.second;

	if (same.first == set1.size())
	{
		cout << " Both vectors are identical" << endl;
	}
	
	{
		cout << " The vectors differ at:" << endl;
		cout << "Set One:" << same.first << endl;
		cout << "Set Two:" << same.second << endl;
	}

}
