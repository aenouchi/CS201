/**
*fltk-trunc.cpp
*Homework 5
*Aaron Nouchi
*CS 201
*Jon Genetti
*March 29,2020
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>
using std::istringstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    Fl_Window window(200, 200, "Window title");
    Fl_Box box(0, 0, 200, 200, "Hey, I mean, Hello, World!");
    window.show();
    return Fl::run();
} 