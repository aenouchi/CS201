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

void AnalyzeTokens(vector<string>& tokens) //Will Identify the type of tokens
{
	int user = 0;
	int tokentype = 0;
	for (auto i : tokens)
	{
		if (i == "")
	{
			tokentype = 4;
	}
		for (int u = 0; u < i.size(); u++)
		{
			if (user != 0 && user != 1)
		}
	}
	
}