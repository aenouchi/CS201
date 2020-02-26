/**
*tokenizer.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
#include <sstream>
#include <vector>
#include "tokenizer.hpp"
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;

int main()
{
	vector<string> tokens;
	string str; 

	cout << "Please type in some text. When you are done, type end" << endl;

	while (true)
	{
		getline(cin, str);
		if (str == "End" || str == "end")
		{
			StringToTokensWS(str, tokens);
			break;
		}

		if (ReadLine(str) == true)
		{
			StringToTokensWS(str, tokens);
		}
	}


/**int digit(int x)
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

	if (str != "")
		return true;

	return false;
}

unsigned stringToTokenWS(std::vector <std::string>& tokens)
{
	int tt = 0;
	for (string s : tokens)
	{
		std::istringstream v(s);
		int x;

		v >> x;
		tt + digit(x);
		continue;
	}
	return tt;
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
 //*