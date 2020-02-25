/**
*crud.cpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#include <iostream>
#include "database.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

void menu()
{
	string ip;
	cout << "Welcome to Create Retrieve Update and Delete (CRUD), what would you like to do?" << endl;
	cout << " create \nread \nupdate \delete \nend";
	cin >> ip;
	cout << "\n\n";
}

void see()
{
	string i1;
	string i2;

		cout << "Input put a name" << endl;
		cin >> i1;
		cout << "\nInput their favourite color: ";
		cin >> i2;

		create(i1, i2);
}

void argh ()
{
	string it;
	int it3;

	cout << "Would you like to search by Name/Color or by number?" << endl;
	if (it == "number" || "entry number") 
	{
		cout << "Which entry would you like to read?" << endl;
		cin >> it3;

		read(it3);
	}
	else
	{
		cout << "What would you like to search for?" << endl;
		cin >> it;

		read(it);
	}
}

void foo()
{
	int im;
	string im2;
	string im3;

	cout << "Which entry number would you like to change? " << endl;
	cin >> im;
	cout << "What will you change the name to?" << endl;
	cin >> im2;
	cout << "What will you change their favourite color to?" << endl;
	cin >> im3;
}

int main()
{
	create("Mario", "Red");
	create("Samus", "Orange");
	create("Sonic", "Blue");
	create("Link", "Green");
	create("Ryu", "White");

	std::string input;
	std::string input2;
	int input3;

	menu();

	if (input == "create" || input == "c")
	{
		see();
		cout <<"\n Would you like to add another one?";
		cin >> input;

		if (input == "yes" || input == "y")
		{
			see();
		}
		menu();
	}
	
	if (input == "read" || input == "r")
	{
		argh();

		cout << "\n\n Would you like like to read another entry?";
		cin >> input;
		if (input == "yes" || "y")
		{
			argh();
		}
		menu();
	}
}
if (input == "update" || input == "u")
{
	yoo();

}