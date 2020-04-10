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

	cout << "It is dangerous to go alone, buy some of these!" << endl;
	cout << "candy, " << candy.getPrice() << endl;
	cout << "game, " << game.getPrice() << endl;
	cout << "pillow, " << pillow.getPrice() << endl;
	cout << "jeans, " << jeans.getPrice() << endl;
	cout << "book, " << book.getPrice() << endl;
	cout << "\n\n";

	bool loop = true;
	while (loop)
	{
			cout << "What would you like?" << endl;
			cout << "add \nremove \ncheckout\n" << endl;

			string input;
			cin >> input;
			int intput;
			cout << endl;

			//Adding stuff
			if (input == "add")
			{
				cout << "What would you like to add?" << endl;
				cout << "candy, " << cart["candy"].getPrice() << endl;
				cout << "game, " << cart["game"].getPrice() << endl;
				cout << "pillow, " << cart["pillow"].getPrice() << endl;
				cout << "jeans, " << cart["jeans"].getPrice() << endl;
				cout << "book, " << cart["book"].getPrice() << endl;
				cout << "\n";

				cin >> input;
				cout << "How much?" << endl;
				cin >> intput;
				cout << endl;

				add(cart[input], intput);
			}
			else if (input == "remove") //Removing stuff
			{
				cout << "What would you like to remove?" << endl;
				cout << "candy - " << cart["candy"].getUnits() << endl;
				cout << "game - " << cart["game"].getUnits() << endl;
				cout << "pillow - " << cart["pillow"].getUnits() << endl;
				cout << "jeans - " << cart["jeans"].getUnits() << endl;
				cout << "book - " << cart["book"].getUnits() << endl;
				cout << "\n";

				cin >> input;
				cout << "How much?" << endl;
				cin >> intput;
				cout << endl;

				remove(cart[input], intput);
			}
			else
			{
				loop = false;
				break;
			}
	}
	double total = 0;
	total += cart["candy"].cost();
	total += cart["game"].cost();
	total += cart["pillow"].cost();
	total += cart["jeans"].cost();
	total += cart["book"].cost();
	cout << "Your total is: $" << total << endl;
	}