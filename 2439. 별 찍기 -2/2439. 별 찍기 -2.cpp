#include <iostream>
using namespace std;

//2439. 별 찍기 -2 (공백+별)
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
