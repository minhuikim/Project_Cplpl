#include <iostream>
using namespace std;

// 8393. 합 (a가 주어졌을 때, 1부터 a까지 합을 구하라)
int main()
{
	int a, b = 0;

	cin >> a;

	for (int i = 0; i <= a; i++)
	{
		b += i;
	}
	cout << b;
}