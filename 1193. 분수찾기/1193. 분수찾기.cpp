#include <iostream>
using namespace std;

int main()
{
	int x, i = 1, a, b;

	cin >> x;

	//int* arr = new int[x];

	while (x>i)
	{
		x -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - x << '/' << x << endl;
	else
		cout << x << '/' << i + 1 - x << endl;
}