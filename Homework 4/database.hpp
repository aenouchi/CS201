/**
*database.hpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#pragma once

#include <iostream>
#include <string>
#include <vector>



std::vector <std::string> name;
std::vector <std::string> color;
std::vector <int> ref;

void create(std::string nn, std::string nc);
void read(std::string g);
void read(int g);
void update(int x, std::string n, std::string c);

