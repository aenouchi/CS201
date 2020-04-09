/**
*hangman.hpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 4,2020
*/

#include <iostream>
#include <vector>
#include <string>
#ifndef hangman.hpp
#define hangman.hpp

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

string answer = "jazz";

vector<char> cgoal;
vector<char> got;
vector<char> guessed;

auto printGuessed = [](vector<char> f) // Shows letters that are used
{
	if (guessed.size() != 0)
	{
		cout << "Used letters" << endl;

		for (char cha : f)
		{
			cout << cha << ", ";
		}
	}
};


#endif