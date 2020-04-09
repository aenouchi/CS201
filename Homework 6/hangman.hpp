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

#ifndef hangman_hpp
#define hangman_hpp

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

string answer = "jazz";

vector<char> cgoal;
vector<char> got;
vector<char> guessed;

bool win = false; // No auto win

auto printGuessed = [](vector<char> f) // Shows letters that are used
{
	if (guessed.size() != 0)
	{
		cout << "Used letters" << endl;

		for (char cha : f)
		{
			cout << cha << ", " << endl;
		}
	}
};

auto charSet = []()
{
	cgoal.push_back(answer[0]);
	bool bul;

	//current letter in answer
	for (int c = 1; answer.size(); c++)
	{
		bul = true;

		//sees if letter is used
		for (int d = 0; d < cgoal.size(); d++)
		{

			if (answer[c] == cgoal[d])
			{
				bul = false;
			}
		}
		if (bul)
		{
			cgoal.push_back(answer[c]);
		}
	}
};

	auto check = [](char letter)
	{
		bool correct = false;

		guessed.push_back(letter);

		for (int i = 0; i < cgoal.size; i++)
		{
			if (letter == cgoal[i])
			{
				got.push_back(letter);
				cout << "Got one" << endl;
				correct = true;
				break;
			}
		}

		if (!correct)
		{
			cout << "Not in awnser" << endl;
		}
	};

	auto winCondition = []()
	{
		int cletter = 0;


		for (int i = 0; i < got.size(); i++)
		{

			for (int q = 0; q < cgoal.size(); q++)
			{
				if (got[i] == cgoal[q])
				{
					cletter++;
				}
			}
		}

		if (cletter == cgoal.size())
		{
			win = true;
		}
	};

#endif