#include <iostream>
using namespace std;

int main()
{
	int v, a, b, goal = 0;
	cin >> a >> b >> v;

	while (1)
	{
		v = v - a + b;

		if (v <= 0 || goal * a >= v)
			break;

		goal++;
	}

	cout << goal;
}