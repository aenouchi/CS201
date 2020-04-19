/**
*caesar-cypher.cpp
*Homework 7
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 13,2020
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::find_first_of;

int main()
{
	string code(string text, int shift);
	string::iterator x;

	string text;
	getline(cin, text);

	cout << "Input text to be decrypted using Caesar Cypher" << endl;
	cout << "Press 'Enter' to end" << endl;

	std::string errors = "0123456789"; 
	x = find_first_of(text.begin(), text.end(), errors.begin(), errors.end());


	while (x != text.end()) 
	{ 
		cout << "Please don't include numbers or symbols in the message." << endl;;
		getline(cin, text);
		x = find_first_of(text.begin(), text.end(), errors.begin(), errors.end()); // Checks again
	}

}