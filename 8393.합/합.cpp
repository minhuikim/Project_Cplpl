#include <iostream>
using namespace std;

// 8393. �� (a�� �־����� ��, 1���� a���� ���� ���϶�)
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