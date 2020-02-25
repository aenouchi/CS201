/**
*database.hpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#pragma once
#ifndef database_hpp
#define database_hpp


#include <iostream>
#include <string>
#include <vector>




extern std::vector <std::string> name;
extern std::vector <std::string> color;
extern std::vector <int> ref;

void create(std::string nn, std::string nc);
void read(std::string g);
void read(int g);
void update(int x, std::string n, std::string c);

#endif // !database.hpp