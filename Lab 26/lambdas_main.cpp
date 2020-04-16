/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

using std::vector;
using std::pair;
using std::string;
using std::cout;
using std::endl;
using std::sort;


int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	vector<pair<size_t, string>> num(WIKIPEDIA_CPP.size());
	for (size_t i = 0; i < WIKIPEDIA_CPP.size(); i++)
	{
		num[i].first = i;
		num[i].second = WIKIPEDIA_CPP[i];
	}


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.
	vector<pair<size_t, string>>::iterator it1 = num.begin();
	vector<pair<size_t, string>>::iterator it2 = num.end();
	sort(it1, it2, [](auto& x, auto& y) {return x.first > y.first; });



	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector
	cout << "Sorted by descending INT: " << printVectorPairs(it1, it2);



	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}
