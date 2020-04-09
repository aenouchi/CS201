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

	cout << "Let's play Hangman, you have ten guesses to guess my word." << endl;
	cout << "Enter a lower case letter." << endl;

	char input;

	for (int t = 0; t < 10; t++)
	{
		printGuessed;

		
		cout << "What is your next character?" << endl;
		cin >> input;
		cout << "\n\n";

		
		check(input);
		cout << "\n";

		
		winCondition;
		if (win)
		{
			cout << "You win" << endl;
			break;
		}

		cout << "--------------------------------------------\n" << endl;
	}

	//after ten turns
	if (!win)
	{
		cout << "You lost" << endl;
	}
}
