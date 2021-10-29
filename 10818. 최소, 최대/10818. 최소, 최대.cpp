#include <iostream>
using namespace std;

int main()
{
	int *a;
	int arr, max = -1000000, min = 1000000;

	cin >> arr;

	a = new int[arr];

	for (int i = 0; i < arr; i++)
	{
		cin >> a[i];

		if (min > a[i])
		{
			min = a[i];
		}

		if (max < a[i])
		{
			max = a[i];
		}
	}

	cout << min << " " << max;

	delete[] a;

	return 0;
}