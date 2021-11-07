#include <iostream>
using namespace std;

// 1546. ЦђБе
int main()
{
	int n, max = -1;
	double p = 0;

	cin >> n;

	double* arr = new double[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = (arr[i] / max) * 100;
		p += arr[i];
	}

	cout << (p / n) << endl;

	delete[] arr;

	return 0;
}

