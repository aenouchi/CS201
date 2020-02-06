/**
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

using namespace std;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char** argv)
{
	std::vector<std::string> names;
	for (int i = 0; i < 10; i++) {
		std::string name;
		cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);

	}
	return 0;
}