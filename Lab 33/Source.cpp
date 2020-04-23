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
	int x;
	double y;
public:
	void setter(char c, double d)
	{
		if (c == 'x' || c == 'X')
		{
			x = d;
		}
		else
		{
			y = d;
		}
	}

	double getter(char c)
	{
		if (c == 'x' || c == 'X')
		{
			return x;
		}
		else
		{
			return y;
		}
	}

	void print()
	{
		auto p = to_string(x);
		auto q = to_string(y);

		cout << p << ", " << q << endl;
	}
};

int main()
{
		cout << "Setter setting:"<< endl;
		sum klass;
		klass.setter('x', 1986);
		klass.setter('y', 2017.0915);

		cout << "Getter getting:" << endl;
		cout << "x-value: " << klass.getter('x') << endl << "y-value: " << klass.getter('y');
		cout << endl << endl;

		cout << "Print() printing:" << endl;
		klass.print();
		cout << endl;
}