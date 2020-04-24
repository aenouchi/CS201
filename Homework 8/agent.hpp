/**
*agent.hpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include "environment.hpp"

#ifndef agent_hpp
#define agent_hpp	

class Agent {
	int temp;
	int goal;
	bool hot;

public:
	Agent();
	Agent(int t, int g);

	void setGoal(int g);
	int getGoal();

	void percieve(Environment e);
	void think();
	void act(Environment& e);
};



#endif 	