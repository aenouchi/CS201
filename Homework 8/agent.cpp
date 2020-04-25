/**
*agent.cpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include "Agent.Hpp" 


using std::cout;
using std::endl;
using std::cin;

//Agent::Agent() : //For thermostat
//	temp(0),
//	goal(0),
//	hot(false)
//{}
//
//Agent::Agent(int t, int g) :
//	temp(t),
//	goal(g)
//{
//	if (t < g)
//	{
//		hot = false;
//	}
//	else
//	{
//		hot = true;
//	}
//}
//
//void Agent::setGoal(int g)
//{
//	goal = g;
//}
//
//int Agent::getGoal()
//{
//	return goal;
//}
//
//void Agent::percieve(Environment e)
//{
//	temp = e.getTemp();
//}
//
//void Agent::think()
//{
//	if (temp < goal)
//	{
//		hot = true;
//	}
//	else
//	{
//		hot = false;
//	}
//}
//
//void Agent::act(Environment& e)
//{
//	if (hot)
//	{
//		e.setHeater(true);
//	}
//	else
//	{
//		e.setHeater(false);
//	}
//}