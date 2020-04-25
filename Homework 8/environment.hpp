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

#ifndef Environment_hpp
#define Environment_hpp	

//
//class Environment {// Prototype for environment function
//		int temp;//For thermostat
//		bool heater;
//
//	public:
//		Environment();
//		Environment(int t);
//		Environment(int t, bool h);
//
//
//	
//		void iteration();
//
//		int getTemp();
//		bool getHeater();
//		void setHeater(bool b);
//	};


class Environment //environment prototype
{
	bool clean;

public:
	Environment();
	Environment(bool c);

	bool getClean();
	void setClean(bool b);
};

#endif 	
