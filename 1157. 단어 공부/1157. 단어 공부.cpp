#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;

	cin >> a;
	
	int leng = a.length();
	int* c = new int[leng];
	int max = -1;
	char max_c = '?';
	
	// �빮�ڷ� ��ȯ
	for (int i = 0; i < leng; i++)
	{
		a[i] = toupper(a[i]);
	}

	// ���� ���ڸ� ++
	for (int i = 0; i < leng; i++)
	{
		for(int j = 0; j < leng; j++)
		{
			if (a[i] == a[i + j])
			{
				c[i]++;
			}
		}

		if (c[i] == 0)
		{
			max_c = '?';
		}
	}
	
	// ���� ���� ���� ã��
	for (int i = 0; i < leng; i++)
	{
		for (int j = 0; j < leng; j++)
		{
			if (c[i] < c[i + j])
			{
				max = c[i + j];
			}
			else
			{
				max = c[i];
			}

			if (c[i] == c[i + j] && a[i] != a[i + j])
			{
				max_c = a[i];
			}

			if (c[i] == c[i + j] && a[i] == a[i + j])
			{
				max_c = '?';
			}
		}
	}

	cout << max_c;
}