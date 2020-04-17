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
using std::find_if;

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	vector<pair<size_t, string>> num(WIKIPEDIA_CPP.size());
	for (size_t z = 0; z < WIKIPEDIA_CPP.size(); z++)
	{
		num[z].first = z;
		num[z].second = WIKIPEDIA_CPP[z];
	}


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.
	vector<pair<size_t, string>>::iterator wiki1 = num.begin();
	vector<pair<size_t, string>>::iterator wiki2 = num.end();
	sort(wiki1, wiki2, [](auto& x, auto& y) {return x.first > y.first; });



	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector
	cout << "Sorted by descending INT: " << printVectorPairs(wiki1, wiki2);



	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.
	sort(wiki1, wiki2, [](auto& x, auto& y) {return x.second < y.second; });



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector
	cout << "Sorted by Ascending String: " << printVectorPairs(wiki1, wiki2) << endl;


	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.
	
//	cout << "Words with less than 15 characters:" << endl;
//	while (wiki1 != wiki2)
//	{
//		auto find = find_if(wiki1, wiki2, [](auto& x) {return x > 15;});
//		cout << find->second << endl;
//		wiki1++;
//	}
//
//
//
//	return 0;
}
