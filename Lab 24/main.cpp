/**
*main.cpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 4,2020
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::map;

int main()
{

		map<string, int> koopalings;
	koopalings["Iggy"] = 4;
	koopalings["Wendy"] = 3;
	koopalings["Larry"] = 1;
	koopalings["Ludwig"] = 7;
	koopalings["Morton"] = 2;
	koopalings["Lemmy"] = 6;
	koopalings["Roy"] = 5;
	koopalings["BowserJr"] = 8;
	koopalings["Kamek"] = 9;
	koopalings["Bowser"] = 10;

	vector <int> koopakids; //Changing map to vector 
	for (auto x : koopalings)
	{
		int y = x.second;
		koopakids.push_back(y);
	}

	cout << "Alphabetical/Initial List:" << endl;
	for (auto v : koopakids)
	{
		cout << v << endl;
	}
	cout << "\n\n";


}