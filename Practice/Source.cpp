#include <iostream>
#include <string>
#include<cmath>


using std::cout;
using std::endl;
using std::cin;

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int main()
{
	int base, exponent;

	cout << "Base?";
	cin >> base;
	cout << "Exponent?";
	cin >> exponent;
	double myPower = power(base, exponent);
		cout << myPower << endl;

}