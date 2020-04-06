/**
*random-map.cpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 4,2020
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
#include <random>
#include <utility>
#include <map>
#include <set>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::seed_seq;
using std::round;
using std::fixed;
using std::string;


int RandomBetweenU(int first, int last)
{
	random_device ran;
	mt19937 gen(ran());
	uniform_int_distribution<int> dis(first, last);
	return dis(ran);
}

int RandomBetweenN(double first, double last)
{
	random_device ran;
	mt19937 gen(ran());
	normal_distribution<double> dis(first, last);
	return dis(gen);
}

int RandomBetween(int first, int last)
{
	return rand() % last + first;
}

void PrintDistributionN(int min, int max)
{
	random_device r;

	int mean = RandomBetween(min, max);

	cout << "Randomly chosen mean:" << mean << endl;

	//Generate a distribution around mean
	seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r(), };
	mt19937 e2(seed2);
	normal_distribution<> normal_dist(mean, 2);

	map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[round(normal_dist(e2))];
	}
	cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		cout << fixed << std::setprecision(1) << std::setw(2) << p.first << ' ' << string(p.second / 200, '*') << endl;

	}
}

void PrintDistributionU(int min, int max)
{
	random_device r;

	int mean = RandomBetween(min, max);

	cout << "Randomly chosen mean:" << mean << endl;

	//Generate a distribution around mean
	seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r(), };
	mt19937 e2(seed2);
	normal_distribution<> normal_dist(mean, 2);

	map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[round(normal_dist(e2))];
	}
	cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		cout << fixed << std::setprecision(1) << std::setw(2) << p.first << ' ' << string(p.second / 200, '*') << endl;

	}
}

void PrintDistribution(int min, int max)
{
	random_device r;

	int mean = RandomBetween(min, max);

	cout << "Randomly chosen mean:" << mean << endl;

	//Generate a distribution around mean
	seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r(), };
	mt19937 e2(seed2);
	normal_distribution<> normal_dist(mean, 2);

	map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[round(normal_dist(e2))];
	}
	cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		cout << fixed << std::setprecision(1) << std::setw(2) << p.first << ' ' << string(p.second / 200, '*') << endl;

	}
}

	int main()
{

}