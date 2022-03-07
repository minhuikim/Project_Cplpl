#include <iostream>
using namespace std;

int main()
{
	int v, a, b, goal = 1;
	cin >> a >> b >> v;

	while (v > a)
	{
		v = v - a + b;

		if (v < 0)
			break;

		goal++;
	}

	cout << goal;
}