#include <iostream>
using namespace std;

int main()
{
	// 1330. �� �� ���ϱ� (�� ���� a, b�� ��)
	int a, b;
	cin >> a >> b;

	if (a > b)
	{
		cout << ">";
	}
	else if (a < b)
	{
		cout << "<";
	}
	else
	{
		cout << "==";
	}
}