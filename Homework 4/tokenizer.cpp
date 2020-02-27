/**
*tokenizer.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include "tokenizer.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;

int main()
{
	string user;
	vector<string> tokens;
		
		cout << "Please type in some text, it will be converted to tokens. When you are done, type \"end\" " << endl;

		while (true)
		{
			getline(cin, user);
			if (user == "end")
			{
				StringToTokensWS(user, tokens);
				break;
			}
			if (ReadLine(user) == true)
			{
				StringToTokensWS(user, tokens);
			}
		}
		tokens.pop_back();

		AnalyzeTokens(tokens);

		return 0;

}