#include <iostream>
using namespace std;

int main()
{
	// 2753. À±³â
	int year, e;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			e = 1;
		}
		else if (year % 100 != 0)
		{
			e = 1;
		}
		else
		{
			e = 0;
		}
	}
	else
	{
		e = 0;
	}
	cout << e;
}