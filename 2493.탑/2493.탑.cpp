#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int* top = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> top[i];

		for (int j = i; j != 0; j--)
		{

		}

		cout << top[i] << " ";
	}
	
	return 0;
}