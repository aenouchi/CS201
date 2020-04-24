/**
*thermostat.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include <string>
#include "environment.hpp"
#include "simulator.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() //Loops for user feedback and temp updates
{
	int defaultroomtemp = 75;
	int defaultthermo = 65;
		

		cout << "The start of thermostat..." << endl << endl;

		Simulator sim(defaultthermo, defaultroomtemp);
		cout << "Default thermostat is set to " << defaultroomtemp << " degrees." << endl;
		cout << "Default room tempurature is set to " << defaultthermo << " degrees." << endl;
		cout << endl;

		bool go = true;
		while (go)
		{
			sim.ask();
			sim.run();
		}
	}