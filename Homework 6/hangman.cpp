/**
*hangman.cpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 4,2020
*/

#include "hangman.hpp"

int main()
{
	charSet;
	cgoal.push_back('j');
	cgoal.push_back('a');
	cgoal.push_back('z');
	cgoal.push_back('z');

	char input;

	for (int t = 0; t < 10; t++)
	{
		printGuessed;

		//Input
		cout << "What is your next character?" << endl;
		cin >> input;
		cout << "\n\n";

		//Check input
		check(input);
		cout << "\n";

		//Did you win?
		winCondition;
		if (win)
		{
			cout << "Congratulations, you've won!" << endl;
			break;
		}

		cout << "--------------------------------------------\n" << endl;
	}

	//lose after 10 turns
	if (!win)
	{
		cout << "Uh uh, you lost  =/" << endl;
	}
}
