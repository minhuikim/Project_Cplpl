#include <iostream>
using namespace std;

// 11022. A+B -8 (�Է¹��� t�� ȸ����ŭ a + b �� �� Case #t: a + b = c�� �������� ���)
int main()
{
	int a, b, t;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << (a + b) << "\n";
	}
}