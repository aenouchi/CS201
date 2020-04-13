/**
*main.cpp
*Lab 26
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 13,2020
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <cstdlib>
#ifndef LAMBDAS_HPP_
#define LAMBDAS_HPP_

using std::string;
using std::vector;
using std::pair;
using std::size_t;

string printVectorPairs(
	vector<pair<size_t, string>>::iterator iter1,
	vector<pair<size_t, string>>::iterator iter2);

const std::vector<std::string> EXAMPLE_CPP = { "The", "quick", "brown",
		"fox", "jumps ", "over", "the", "lazy", "dog" };



#endif
