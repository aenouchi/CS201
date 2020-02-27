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

unsigned StringToTokensWS(string& input, vector<string>& tokens)
{
	istringstream word(input);
	while (word >> input)
	{
		tokens.push_back(input);
	}
	tokens.push_back("");
		return tokens.size();
}

void AnalyzeTokens(vector<string>& tokens) //Will Identify the type of tokens
{
	int tokentype = 0;
	for (auto i : tokens)
	{
		if (i == "")
		{
			tokentype = 4;
		}
		for (int u = 0; u < i.size(); u++)
		{
			if (tokentype != 0 && tokentype != 1)
			{
				break;
			}
			if (i.at(u) == '"' && i.at(i.size() - 1) == '"')
			{
				tokentype = 2;
				break;
			}
			for (char c = 48; c <= 57; c++)
			{
				if (i.at(u) == c)
				{
					tokentype = 1;
					break;
			}
			else if (i.at(u) != c)
			{
					tokentype = 3;
			}
		}
	}
	if (tokentype == 0)
	{
		cout << "[unknown]\t";
	}
	if (tokentype == 1)
	{
		cout << "[integer]\t";
	}
	if (tokentype == 2)
	{
		cout << "[string]\t";
		cout << "\"\\\"" << i.substr(1, i.size() - 2) << "\"\\\"" << endl;

	}
	if (tokentype == 3)
	{
		cout << "[identifier]\t";
	}
	if (tokentype == 4)
	{
		cout << "[whitespace]\t";
	}
	if (tokentype == 2)
	{
		cout << "\"" << i << "\"" << endl;
	}
	tokentype = 0;
}
}