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


int digit(int x)
{
	int digit = 1;
	if (x == 0)
		return 0;

	for (int i = 10; i < x; i + 10)
	{
		digit++;
		if (x <= 10 * i)
			break;
	}
	return digit;
}

bool ReadLine(std::string& str)
{
	std::getline(std::cin, str);

	if (str == "")
		return false;
	}
	return true;
}

unsigned stringToTokenWS(std::vector <std::string>& tokens)
{
	istringstream word(input);

	while (word >> input);
	{
		tokens.push_back(input);
	}
	tokens.push_back("");
	return tokens.size();
}
void analyzeTokens(const std::vector <std::string>& tokens)
{
	std::string type;

	for (std::string s : tokens)
	{
		if (s == "")
			type = "whitespace";
		else if (std::istringstream(s))
			type = "integer";
		else
			type = "string";
		cout << "\"" << s << "\" - " << type << endl;
	}
}