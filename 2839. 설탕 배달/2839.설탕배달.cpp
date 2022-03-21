#include <iostream>
using namespace std;

int getCnt(int n)
{
	int x, y, cnt = 0, flag;

	if (n % 5 == 0)
	{
		cnt = n / 5;
	}
	else
	{
		/*while (n)
		{

		}*/

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
	int n;

	cin >> n;

	cout << getCnt(n);

	return 0;
}