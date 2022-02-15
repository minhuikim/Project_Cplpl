#include <iostream>
using namespace std;

int main()
{
	int dice[3] = {};
	int k = 0, max, cnt = 0;
	char div;
	int money;

	for (int i = 0; i < 3; i++)
	{
		cin >> dice[i];
	}

	for (int i = 0; i < 3; i++)
	{
		max = dice[i];
		div = 'N';
		for (int j = i - 1; j >= 0; j--)
		{
			if (dice[i] == dice[j])
			{
				div = 'Y';
				k = dice[i];
			}
			if (max < dice[j])
			{
				max = dice[j];
			}
		}
		
		if (div == 'Y')
		{
			cnt++;
		}
	}

	if (cnt == 2)
	{
		money = 10000 + (k * 1000);
	}
	else if (cnt == 1)
	{
		money = 1000 + (k * 100);
	}
	else
	{
		money = max * 100;
	}

	cout << money << endl;

	return 0;
}