#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() 
{
	cout << "How old are you?" << endl;
	int age;

	cin >> age;

	if (age < 13)
	{
		cout << "Cry me a river you little shit!" << endl;

	}

	else if (age > 19)
	{
		cout << "Die you fucking boomer!" << endl;

	}

	else
	{
		cout << " Try again when your balls finally drop." << endl;
	}
	return 0;
}