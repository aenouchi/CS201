/**
*Source.cpp
*Lab21
*Aaron Nouchi
*CS 201
*Jon Genetti
*March 30,2020
*/

#include "truncstruct.hpp"
#include "truncstruct.cpp"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string input;
	cout << "Input a string:" << endl;
	cin >> input;
	cout << "\n\n\n";

	StringInfo x = trunc8(input);
	cout << x.str << endl;
	cout << x.len;

}