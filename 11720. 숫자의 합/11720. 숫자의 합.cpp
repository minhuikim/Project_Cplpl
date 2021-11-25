#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;

	cin >> n;

	if (n < 1) n = 1;
	if (n > 100) n = 100;

	char* arr = new char[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		arr[i] = arr[i]-'0';
		sum += arr[i];
	}

	cout << sum << endl;
	return 0;
}