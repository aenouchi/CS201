/**
*shopping.cpp
*Homework 6
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 9,2020
*/

#include "shopping.hpp"

int main()
{
	record candy;
	candy.setPrice(.99);
	record game;
	game.setPrice(59.99);
	record pillow;
	pillow.setPrice(39.99);
	record jeans;
	jeans.setPrice(7.99);
	record book;
	book.setPrice(19.99);

	map<string, record> cart;
	cart["candy"] = candy;
	cart["game"] = game;
	cart["pillow"] = pillow;
	cart["jeans"] = jeans;
	cart["book"] = book;

	