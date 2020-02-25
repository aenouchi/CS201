/**
*database.hpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#ifndef database_hpp
#define database_hpp

#include <string>
#include <map>

using std::string;

struct MyDatabaseRecord
{
	string name{ "name" };
	string favouritecolor{ "color" };
};

bool CreateRecord(const string& key);
bool ReadRecord(const string& key, MyDatabaseRecord &record);
bool UpdateRecord(const string& key, const MyDatabaseRecord &record);
bool DeleteRecord(const string& key);
bool InputRecord(MyDatabaseRecord &record);
bool PrintRecord(const string& key);

#endif
