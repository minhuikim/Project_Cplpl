#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[1000000];
	int cnt = 1;

	cin.getline(a, 1000000, '\n');

	for (int i = 0; i < strlen(a); i++)
	{
		// ���ڿ� �߰��� ������ ������ 1 ����
		if (i > 0 && a[i] == ' ' && i < strlen(a)-1)
		{
			cnt++;
		}

		// ���ڰ� 1���ε� �����̸� 0
		if (strlen(a) == 1 && a[i] == ' ')
		{
			cnt = 0;
		}
	}

	cout << cnt;

	return 0;
}