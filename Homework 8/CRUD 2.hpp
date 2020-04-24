/**
*CRUD 2.hpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 24,2020
*/
#ifndef CRUD_hpp
#define CRUD_hpp

#include<iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;
using std::pair;

namespace CRUD //prototypes CRUD
{
	void create(map<string, string>& q, string w, string e);

	string read(pair<string, string> p);
	string read(pair<string, string> p, int x);
	string read(map<string, string> q, string w);
	void read(map<string, string> q);

	void update(map<string, string>& q, string w, string e);

	void Delete(map<string, string>& q, string w);
}

#endif 