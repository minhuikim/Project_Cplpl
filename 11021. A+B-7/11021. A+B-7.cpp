#include <iostream>
using namespace std;

// 11021. A+B -7 (A+B�� 1~t���� �ٿ��� ���)
int main()
{
	int a, b, t, i;

	cin >> t;

	for (i=1; i<=t; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i << ": " << (a + b) << "\n";
	}
}