/**
*main.cpp
*Lab 26
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 13,2020
*/

#include <iostream>
#include "lambdas.hpp"
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <cstdlib>

using std::string;
using std::vector;
using std::pair;
using std::size_t;
using std::cout;
using std::endl;


int main()
{
	/*vector <pair<size_t, string>> vec;

	size_t c = 1;
	for (string i : EXAMPLE_CPP)
	{
		pair<size_t, string> p = std::make_pair(c, i);
		vec.push_back(p);
		c++;*/

	string printVectorPairs(
		vector<pair<size_t, string>>::iterator iter1,
		vector<pair<size_t, string>>::iterator iter2) {

		ostringstream output;
		int count = 1;
		while (iter1 != iter2) {
			output << std::setw(5) << std::left << count << "{ " << iter1->first
				<< ", " << iter1->second << " }" << std::endl;
			++iter1;
			++count;
		}
		return output.str();
	}

