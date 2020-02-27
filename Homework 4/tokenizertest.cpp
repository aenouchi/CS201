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
		tokens.push_back(input);
	}
	tokens.push_back("");
		return tokens.size();
}

void AnalyzeTokens(vector<string>& tokens) //Will Identify the type of tokens
{
	int flag = 0;
	int tokentype = 0;
	for (auto i : tokens)
	{
		if (i == "")
		{
			tokentype = 4;
		}
		for (int u = 0; u < i.size(); u++)
		{
			if (flag != 0 && flag != 1)
			{
				break;
			}
			if (i.at(u) == '"' && i.at(i.size() - 1) == '"')
			{
				flag = 2;
				break;
			}
			for (char c = 20; c <= 100; c++)
			{
				if (i.at(u) == c)
				{
					flag = 1;
					break;
			}
			else if (i.at(u) != c)
			{
				flag = 3;
			}
		}
	}
	if (flag == 0)
	{
		cout << "[unknown]" << endl;
	}
	if (flag == 1)
	{
		cout << "[integer]" << endl;
	}
	if (flag == 2)
	{
		cout << "[string]" << endl;
		cout << "\"\\\"" << i.substr(1, i.size() - 2) << "\"\\\"" << endl;

	}
	if (flag == 3)
	{
		cout << "[identifier]" << endl;
	}
	if (flag == 4)
	{
		cout << "[whitespace]" << endl;
	}
	if (flag == 2)
	{
		cout << "\"" << i << "\"" << endl;
	}
	flag = 0;
}
}