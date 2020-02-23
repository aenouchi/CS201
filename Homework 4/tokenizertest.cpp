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
	vector <std::string> mv = { "HelloWorld","Sonic1991", "$$$$","012345689" };
	
	cout << "Testing ReadLine():"<< endl;
	for (std::string x : mv)
	{
		ReadLine(x);
	}
	cout << "Testing stringToTokenWS():" << endl;
	stringToTokenWS(mv);

	cout << "Testing analyzeTokens():" << endl;
	analyzeTokens(mv);
}