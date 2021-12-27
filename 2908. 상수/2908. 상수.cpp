#include <iostream>
using namespace std;

int main()
{
	char a[4], b[4];
	int a1, b1;

	cin >> a >> b;

	for (int i = 0; i < 3; i++) 
	{
		if (i == 0) 
		{
			a1 = a[i] - 48;
			b1 = b[i] - 48;
		}
		else if (i == 1) 
		{
			a1 += (a[i] - 48) * 10;
			b1 += (b[i] - 48) * 10;
		}
		else
		{
			a1 += (a[i] - 48) * 100;
			b1 += (b[i] - 48) * 100;
		}
	}
	if (a1 > b1)
	{
		cout << a1;
	}
	else
	{
		cout << b1;
	}

	/*
	// 문자열 사용 안하고 숫자로만 해결

	int a, b;
	int a1, b1;

	cin >> a >> b;

	a1 = (a / 100) + ((a / 10) % 10) * 10 + (a % 10) * 100;
	b1 = (b / 100) + ((b / 10) % 10) * 10 + (b % 10) * 100;

	if (a1 > b1)
	{
		cout << a1;
	}
	else
	{
		cout << b1;
	}
	*/

	return 0;
}