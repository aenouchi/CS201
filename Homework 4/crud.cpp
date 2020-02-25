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
	std::string ip;
	cout << "Welcome to Create Retrieve Update and Delete (CRUD), what would you like to do?" << endl;
	cout << " create \nread \nupdate \delete \nend";
	cin >> ip;
	cout << "\n\n";
}

void see()
{

}