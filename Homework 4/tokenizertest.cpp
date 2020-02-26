
/**
*tokenizertest.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
#include "tokenizer.hpp"
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int main()
{
	cout << "Please type in some text. When you are done, type end" << endl;

	vector <std::string> mv = { "HelloWorld","Sonic1991", "$$$$","012345689" };

	cout << "Testing ReadLine():\n";
	for (std::string x : mv)
	{
		ReadLine(x);
		cout << "\n";
	}
	cout << "\n\n\n\n";

	cout << "Testing stringToTokenWS():\n";
	stringToTokenWS(mv);
	cout << "\n\n\n\n";

	cout << "Testing analyzeTokens(): \n";
	analyzeTokens(mv);
}