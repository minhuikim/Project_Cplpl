#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int n, cnt = 0;

	cin >> n;
	
	if (n == 1)
	{
		cout << n;
	}

	while (n >= 2)
	{
		a = a + (6 * cnt);
		cnt++;
		if (n <= a)
		{
			cout << cnt;
			break;
		}
	}

	return 0;
}