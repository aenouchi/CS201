/**
*10 questions.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 28,2020
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	cout << " Think of a common animal you would find on a farm. \n" << endl;
	cout << "I will try to guess the animal within ten questions. \n" << endl;

	cout << "Does your animal typically walk on four legs? (yes/no)\n" << endl;

	string input;

	cin >> input;

	if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
	{
		cout << "Does your animal have hooves? (yes/no)\n" << endl;

		cin >> input;

		if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
		{
			cout << "Is it a hybrid animal? (yes/no)\n" << endl;

			cin >> input;

			if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
			{
				cout << "Is it a Mule?\n" << endl;

				cin >> input;


				if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")

				{
					cout << "I win! YOU LOSE\n" << endl;

					exit;

				}

			}

			else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
			{
				cout << "Is your animal know to be ridden on for many miles? (yes/no)\n" << endl;

				cin >> input;

				if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
				{
					cout << "Is your animal also a main character in the film 'Shrek'? (yes/no)\n" << endl;

					cin >> input;

					if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
					{
						cout << "Is it a Donkey/Jackass?\n" << endl;

						cin >> input;



						if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")

						{
							cout << "I win! YOU LOSE\n" << endl;

							exit;

						}



					}

					else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
					{
						cout << "Is it a Horse/Pony?\n" << endl;

						cin >> input;

						if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")

						{
							cout << "I win! YOU LOSE\n" << endl;

							exit;

						}
					}
				}

				else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
				{
					cout << "Is your animal used to make bacon ? (yes / no)\n" << endl;

					cin >> input;

					if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")

					{
						cout << "Is it a Pig/Hog?" << endl;

						cin >> input;

						if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
						{
							cout << "I win! YOU LOSE\n" << endl;

							exit;
						}

					}
					else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
					{
						cout << "Is it a Cow/Bull?" << endl;

						cin >> input;

						if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
						{
							cout << "I win! YOU LOSE\n" << endl;

							exit;
						}

						else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
						{
							cout << "Does your animal bark? (yes/no)\n" << endl;

							cin >> input;

						}
					}
				}
				else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
				{
					cout << "Is your animal a type of bird? (yes/no)\n" << endl;

					cin >> input;

				}
			}

		}
		else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
		{
			cout << "Is your animal generally considered a pest? (yes/no)\n" << endl;

			cin >> input;

			if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
			{
				cout << "Does your animal known for jumping? (yes/no)\n" << endl;

				cin >> input;

				if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
				{
					cout << "Is it a Rabbit/Hare? (yes/no)\n" << endl;

					cin >> input;

					if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
					{
						cout << "I win! YOU LOSE\n" << endl;

						exit;
					}
				}
			}

			else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N")
			{
				cout << "Does your animal bark? (yes/no)\n" << endl;

				cin >> input;

				if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
				{
					cout << "Is it a Dog? (yes/no)\n" << endl;

					cin >> input;

					if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
					{
						cout << "I win! YOU LOSE\n" << endl;

						exit;

					}
				}
			}





				/*

				cout << "Is it a Mouse/Rat? (yes/no)\n" << endl;

				cout << "Does your animal bark? (yes/no)\n" << endl;

				cout << "Is it a Dog? (yes/no)\n" << endl;

				cout << "Is it a Cat? (yes/no)\n" << endl;

				cout << "Is your animal a type of bird? (yes/no)\n" << endl;

				cout << "Is your animal used as the primary meat for the 'KFC' chain resturants? (yes/no)\n" << endl;

				cout << "Is your animal bigger than a microwave? (yes/no)\n" << endl;

				cout << "Is it a Chicken/Rooster? (yes/no)\n" << endl;

				cout << "Is it a Bug (literally any type of insect)? (yes/no)\n" << endl;

				cout << "You prick, are you seriously thinking of a Human? (yes/no)\n" << endl;

				cout << "Does your animal have webbed feet? (yes/no)\n" << endl;

				cout << "Is your animal used as a model for a popular rubber bath toy? (yes/no)\n" << endl;

				cout << "Is it a Duck? (yes/no)\n" << endl;

				cout << "Is it a Goose? (yes/no)\n" << endl;

				cout << "Is your animal commonly eaten during Thanksgiving? (yes/no)\n" << endl;

				cout << "Is it a Turkey? (yes/no)\n" << endl;

				cout << "Is your animal almost exclusivly black? (yes/no)\n" << endl;

				cout << "Is it a Crow/Raven? (yes/no)\n" << endl;

				cout << "Does your animal make a sound that sounds similar to the English word 'who'? (yes/no)\n" << endl;

				cout << "Is it an Owl? (yes/no)\n" << endl;

				cout << "Is it a small wild bird (anytype)? (yes/no)\n" << endl;

				cout << "I win! YOU LOSE\n" << endl;

				cout << "You win...Or cheated.\n" << endl;*/



				/*if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
				{
					cout << "Does your animal known for jumping? (yes/no)\n" << endl;

					cin >> input;

					if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
					{
						cout << "Does your animal known for jumping? (yes/no)\n" << endl;

						cin >> input;

						if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
						{
							cout << "Is it a Rabbit/Hare? (yes/no)\n" << endl;

							cin >> input;

							if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y")
							{
								cout << "I win! YOU LOSE\n" << endl;

								exit;
							}*/





				cout << "Do you want to play again? (yes/no)\n" << endl;

				cin >> input;
			}
		}
	}
