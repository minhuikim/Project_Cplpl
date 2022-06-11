#include <iostream>
using namespace std;

int add_card(int* card, int n, int m, int add, int minus)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int sum = card[i] + card[j] + card[k];

				if ((add == m && sum == m || add != m && (sum == add || sum == minus)))
				{
					return sum;
				}
			}
		}
	}

	return add_card(card, n, m, add + 1, minus - 1);
}

int main()
{
	int n, m;
	int card[100] = { 0, };

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	cout << add_card(card, n, m, m, m);

	return 0;
}