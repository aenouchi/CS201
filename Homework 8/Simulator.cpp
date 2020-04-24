/**
*simulator.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include "simulator.hpp"
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

Simulator::Simulator() :
room(),
powers()
{}

Simulator::Simulator(int t, int g) :
	room(t),
	powers(t, g)
{}

void Simulator::askOwner()
{
	string input1;
	int input2;

	cout << "Currently, the thermostat is set to " << powers.getGoal() << " degrees." << endl;
	cout << "Right now, the temperature is " << room.getTemp() << " degrees." << endl;
	cout << "Would you like to change the thermostat?" << endl;
	cin >> input1;

	if (input1 == "yes" || input1 == "y" || input1 == "Yes" || input1 == "Y" || input1 == "YES")
	{
		cout << endl;
		cout << "What would you like to change the thermostat to?" << endl;

		cin >> input2;
		powers.setGoal(input2);
	}

	cout << endl;
}
void Simulator::run()
{
	for (int c = 0; c < 10; c++)
	{
		powers.percieve(room);
		powers.think();
		powers.act(room);

		room.iteration();
	}
}