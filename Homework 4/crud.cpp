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

void search ()
{
	string it;
	int it3;

	cout << "Would you like to search by Name/Color or by number?" << endl;
	if (it == "number") 
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