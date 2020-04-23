/**
*Source.cpp
*Lab 33
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 22,2020
*/
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::to_string;

class sum {
	int a;
	double b;
public:
	void setter(char c, double d)
	{
		if (c == 'a' || c == 'A')
		{
			a = b;
		}
		else
		{
			b = b;
		}
	}

	double getter(char c)
	{
		if (c == 'a' || c == 'A')
		{
			return a;
		}
		else
		{
			return b;
		}
	}

	void print()
	{
		auto p = to_string(a);
		auto q = to_string(b);

		cout << p << ", " << q << endl;
	}
};

int main()
{

}