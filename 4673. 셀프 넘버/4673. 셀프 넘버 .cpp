#include <iostream>
using namespace std;

int d(int n)
{
	int npl = n;

	while(1)
	{
		npl += (n % 10);

		n = n / 10;

		if (n <= 0) break;
	}

	return npl;
	
}

int main()
{
	int n = 10001;
	bool boo[10001] = {};

	for (int i = 1; i < n; i++)
	{
		int num = d(i);

		if (num <= n)
		{
			boo[num] = true;
		}
	}

	for (int i = 1; i < n; i++)
	{
		if (!boo[i])
		{
			cout << i << "\n";
		}
	}
	return 0;
}