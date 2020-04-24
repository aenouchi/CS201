/**
*CRUD main.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 24,2020
*/
#include<iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;
using std::pair;

int main()
{
	
	map<string, string> q;//base map
	q["Sonic"] = "Hedgehog";
	q["Tails"] = "Fox";
	q["Knuckles"] = "Echidna";
	q["Egg"] = "Man";

	cout << "Initial map:" << endl;
	read(q);
	cout << endl;

	
	cout << "Testing Create:" << endl;//create test
	create(q, "Shadow", "Hedgehog");
	read(q);
	cout << endl;

	
	cout << "Testing Read:" << endl;//read test
	read(q);
	cout << endl;

	
	cout << "Testing Update:" << endl;//update test
	update(q, "Derick", "Minecraft");
	read(q);
	cout << endl;

	
	cout << "Testing Delete:" << endl;//delete test
	Delete(q, "Egg");
	read(q);
}



