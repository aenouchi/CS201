/**
*home.hpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <stdlib.h>

#include "Agent.Hpp" 
#ifndef home_HPP
#define home_HPP 

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::mt19937;

class Environment;
class Agent;

void clearConsole();
void waitForContinue();
void printState(Environment& env, Agent& agt);
bool rollBool(mt19937* e1);

#endif

