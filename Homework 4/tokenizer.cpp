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
	string user;
	vector<string> tokens;
		
		cout << "Please type in some text. When you are done, type \"end\" " << endl;

		while (true)
		{
			getline(cin, user);
			if (user == "end")
			{
				stringtotokenWS(user, tokens);
				break;
			}
			if (ReadLine(user) == true)
			{
				stringtotokenWS(user, tokens);
			}
		}

		return 0;

}