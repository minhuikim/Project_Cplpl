#include <iostream>
using namespace std;

int getCnt_5(int n)
{
	int x, y, cnt = 0, flag;

	if (n % 5 == 0)
	{
		cnt = n / 5;
	}
	else
	{
		if (n % 5 == 3)
			cnt = n / 5 + 1;
		else if (n % 3 == 0)
			cnt = n / 3;
		else
			cnt = -1;
	}

	if (cnt == -1)
	{
		y = 1;
		flag = 0;
		while (1)
		{
			x = 3;
			n = n - x;
			if (n % 5 == 0)
			{
				flag = 1;
				break;
			}
			else if (n % 3 < 3)
				break;
			y++;
		}
		if (flag)
			cnt = y + 1;
		else
			cnt = -1;
	}

	return cnt;
}
int main()
{
	int n, x, y;

	cin >> n;

	x = getCnt_5(n);

	//y = getCnt_3(n);

	if (x > y)
		cout << y;
	else
		cout << x;


	return 0;
}