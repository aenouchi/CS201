/**
*name.cpp
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 5,2019
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using std::cout;
using std::endl;
using std::cin;


void inputnames(std::vector<std::string>& names) // function for managing the inputs given for the names
{
	std::string x;
	std::cin >> x;
	names.push_back(x);
}

bool doesNameExist(const std::string& nametoFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nametoFind)
		{
			return true;
			break;
		}
	}
	return false;
}



int main(int argc, char** argv)
{
	std::vector<std::string> names;
	for (int i = 0; i < 10; i++) {
		std::string name;
		cout << "Please enter a name: " << endl;
		std::getline(cin, name);
		names.push_back(name);

	}
	return 0;
}