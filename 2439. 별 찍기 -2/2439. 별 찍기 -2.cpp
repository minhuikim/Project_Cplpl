#include <iostream>
using namespace std;

//2439. �� ��� -2 (����+��)
int main()
{
	int n;
	string star;

	cin >> n;

	for (int i = n; i > 0; i--)
	{
		star = "";

		for (int j = 1; j <= n; j++)
		{
			if (j < i)
			{
				star += " ";
			}
			else
			{
				star += "*";
			}
		}

		cout << star << "\n";
	}
}
