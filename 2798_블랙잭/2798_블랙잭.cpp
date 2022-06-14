#include <iostream>
using namespace std;

int main()
{
	int n, m, sum, ans = 0;
	int card[100] = { 0, };

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = card[i] + card[j] + card[k];
				if (sum > ans && sum <= m) ans = sum;
			}
		}
	}

	cout << ans;

	return 0;
}