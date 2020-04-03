/**
*Source.cpp
*Lab 23
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 1,2020
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::map;

map <string, int> mapSort(map <string, int> list)
{
	vector<int> order;
	map <string, int> good;

	vector <int> count;
	for (auto h : list)
	{
		count.push_back(h.second);
	}

	for (int k = 0; k < count.size(); k++)
	{
		int small = count[0];
		for (int i = 1; i < count.size(); i++)
		{
			if (count[i] < small)
				small = count[i];
		}
		order.push_back(count[small]);
		count.erase(count.begin() + small);
	}
	for (int i = 0; i < order.size(); i++)
	{
		for (auto k : list)
		{
			if (k.second == order[i])
			{
				std::string str = k.first;
				good[str] = order[i];
				break;
			}
		}
	}

	return good;
}



int main()
{
	map<string, int> mp;
	mp["peperoni"] = 4;
	mp["cheese"] = 1;
	mp["anchovies"] = 3;
	mp["spiniach"] = 2;
	mp["pineapple"] = 5;

	mp.erase("pineapple");

	map <string, int> sorted = mapSort(mp);

	for (auto x : sorted)
	{
		cout << x.first << ", " << x.second << endl;
	}

}





