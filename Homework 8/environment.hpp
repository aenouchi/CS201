/**
*environment.hpp
*Homework 8
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#ifndef environment_hpp
#define environment_hpp	


#include "agent.hpp"
#include "simulator.hpp"

class Environment {
	class Environment {
		int temp;
		bool heater;

	public:
		Environment();
		Environment(int t, bool h);


		void iteration() const;
	};
};


#endif 	