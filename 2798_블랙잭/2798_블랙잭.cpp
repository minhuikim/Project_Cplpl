#include <iostream>
using namespace std;

int main()
{
	int n, m, c, ans;
	int card[100] = { 0, };
	char sum[300000] = { 0, };

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
				c = card[i] + card[j] + card[k];
			
				if (m == c) break;
				else sum[c] = 1;
			}
			if (m == c) break;
		}
		if (m == c) break;
	}

	if (m == c)
	{
		cout << c;
	}
	else
	{
		if (c < m)
		{
			for (int i = m; i > c; i--)
			{
				if (sum[i] == 1) cout << i;
			}
		}
		else
		{
			for (int i = c; i < m; i++)
			{
				if (sum[i] == 1) cout << i;
			}
		}
	}

	return 0;
}