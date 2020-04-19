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

	cout << "Input text to be decrypted using Caesar Cypher (Use ONLY letters)" << endl;
	cout << "Press 'Enter' to end" << endl;

	std::string errors = "0123456789"; 
	x = find_first_of(text.begin(), text.end(), errors.begin(), errors.end());


	while (x != text.end()) 
	{ 
		cout << "Error: Bad character entered " << endl;;
		getline(cin, text);
		x = find_first_of(text.begin(), text.end(), errors.begin(), errors.end()); // Checks again
	}

	string empty = " ";
	if (text.empty() || text == empty) 
	{ 
		cout << "Program End" << endl;
		return 0;
	}

	int change;
	cout << "How much do you want to shift the characters (ints ONLY) ";
	cin >> change;

	while (!cin) {
		cout << "ERROR: Only Ints" << endl;
		cin >> change;
	}

	cout << "Results: " << code(text, change);

	return 0;
}

string code(string text, int change) 
{ 
	string letters = "abcdefghijklmnopqrstuvwxyz"; 
	string capital = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char empty = ' '; 
	size_t index;

	for (size_t i = 0; i < text.size(); i++) 
	{ 
		index = letters.find(text[i]);

		if (text[i] == empty)

}