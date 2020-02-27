/**
*tokenizer.hpp
*Homework 3
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 22,2020
*/
#ifndef tokenizer_hpp
#define tokenizer_hpp
#pragma once //helps file is only in one comp
#include <iostream>
#include <string>
#include <vector>
#include <sstream> //provides string stream classes
using std::istringstream;
using std::string;
using std::vector;

bool ReadLine(string& user);
unsigned StringToTokensWS (string& input, vector<string>& tokens);
void AnalyzeTokens(vector<string>& tokens);

#endif