#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, z, idx, max;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		max = idx = 0;
		for (int j = i; j < n; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				idx = j;
			}
		}
		z = arr[i];
		arr[i] = arr[idx];
		arr[idx] = z;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}