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
using std::string;

bool ReadLine(string& user)
{
	if (user == "")
	{
		return false;
	}
	return true;
}

unsigned stringtotokenWS(string& input, vector<string>& tokens)
{
	istringstream word(input);
	while (word >> input)
	{
		tokens.push_back(input)
	}
	tokens.push_back("");
		return tokens.size();
}