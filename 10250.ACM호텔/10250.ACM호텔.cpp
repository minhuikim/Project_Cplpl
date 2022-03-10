#include <iostream>
using namespace std;

int main()
{
	int t, height = 0, width = 0;

	cin >> t;

	int* h = new int[t];
	int* w = new int[t];
	int* n = new int[t];

	for (int i = 0; i < t; i++)
	{
		cin >> h[i] >> w[i] >> n[i];
	}

	for (int i = 0; i < t; i++)
	{
		height = (n[i] - (h[i] * (n[i] / h[i]))) * 100;
		width = (n[i] / h[i]) + 1;

		if (!height)
		{
			height = h[i] * 100;
			width = (n[i] / h[i]);
		}
		if (!width) width = n[i];

		cout << (height + width) << "\n";
	}

	delete[] h, w, n;
	
	return 0;
}