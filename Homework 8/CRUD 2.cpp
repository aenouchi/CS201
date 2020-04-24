/**
*CRUD 2.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 24,2020
*/
#include<iostream>
#include <string>
#include <map>
#include "CRUD 2.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;
using std::pair;

void CRUD::create(map<string, string>& q, string w, string e)//Define create
{
	q.insert(pair<string, string>(w, e));
}

string CRUD::read(pair<string, string> p)//Define read
{
	return p.second;
}
string CRUD::read(pair<string, string> p, int x)
{
	if (x == 2)
		return p.second;
	else
		return p.first;
}
string CRUD::read(map<string, string> q, string w)
{
	return q[w];
}
void CRUD::read(map<string, string> q)
{
	for (pair<string, string> p : q)
	{
		cout << read(p, 1) << ": " << read(p, 2) << endl;
	}
}
void CRUD::update(map<string, string>& q, string w, string e)//Define update
{
	q[w] = e;
}
void CRUD::Delete(map<string, string>& q, string e)//Define delete
{
	q.erase(e);
}