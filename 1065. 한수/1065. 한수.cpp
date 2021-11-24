#include <iostream>
using namespace std;

int hansu(int x)
{
	int a, b, cnt=0;

	if (x > 999) x = 999;

	for (int i = 1; i <= x; i++)
	{
		if (i < 100)
		{
			cnt++;
		}
		else
		{
			a = (i / 100) - ((i / 10) % 10);
			b = ((i / 10) % 10) - (i % 10);

			if (a == b) cnt++;
		}
	}

	return cnt;
}
int main()
{
	int x, cnt;
	cin >> x;
	cnt = hansu(x);
	cout << cnt;
	return 0;
}
