#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n, e, k = 10;
	int arr[10] = {};

	cin >> a >> b >> c;
	e = a * b * c;

	while (e > 0)
	{
		n = (e % k) / (k / 10);
		arr[n] += 1;
		e = e - (e % k);
		k = k * 10;
	}

	/*while (e > 0)
	{
		arr[e % 10] += 1;
		e /= 10;
	}*/

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
