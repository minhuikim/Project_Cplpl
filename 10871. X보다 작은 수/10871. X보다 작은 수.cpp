#include <iostream>
using namespace std;

//10871. X���� ���� ��
/*
	1. n, x �Է�
	2. �Է¹��� n�� ������ŭ ���� �Է�(p)
	3. p�Է� �� x���� ���� ���� ������� ���
*/
int main()
{
	int n, x;
	int* p;

	cin >> n >> x;
	p = new int[n];
	
	for (int k = 0; k < n; k++)
	{
		cin >> p[k];
	}

	for (int i = 0; i < n; i++)
	{
		if (p[i] < x)
		{
			cout << p[i] << " ";
		}
	}

	delete p;
}