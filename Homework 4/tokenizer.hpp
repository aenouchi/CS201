/**
*tokenizer.hpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#pragma once //helps file is only in one comp
#include <iostream>
#include <string>
#include <vector>
#include <sstream> //provides string stream classes

int digit(int x);
bool ReadLine(std::string& str);
unsigned stringToTokenWS(std::vector <std::string>& tokens);
void analyzeTokens(const std::vector <std::string>& tokens);