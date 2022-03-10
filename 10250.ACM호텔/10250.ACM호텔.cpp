#include <iostream>
using namespace std;

int main()
{
	int t, h, w, n, height = 0, width = 0, room;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		for (int j = 0; j < n; j++)
		{
			height = (n - (h * (n / h))) * 100;

			width = (n / h) + 1;
		}

		cout << (height + width) << endl;
	}

	
	return 0;
}