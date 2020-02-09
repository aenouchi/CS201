/**
*money.cpp
*Homework 1
*Aaron Nouchi
*CS 201
*Jon Genetti
*February 5,2019
*/
#include <iostream>

using std::cout;
using std::endl;

void print_money(
	int pennies
)
{
	int nickels = pennies / 5;
	pennies = pennies % 5;

	if (nickels == 1)
		cout << nickels << " nickel " << endl;
	else if (nickels > 1)
		cout << nickels << " nickels " << endl;

	if (pennies == 1)
		cout << pennies << " penny " << endl;
	if (pennies > 1)
		cout << pennies << " pennies " << endl;
	
	
	
	
	int dimes = pennies / 10;
	int quarters = pennies / 25;
	int halfdollars = pennies / 50;
	int dollars = pennies / 100;

}


int main(){

	for (int cents = 1; cents <= 10; cents++)
		print_money(cents);
}