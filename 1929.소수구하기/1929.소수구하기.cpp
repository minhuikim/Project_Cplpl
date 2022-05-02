#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, cnt = 0;
	char num[1000001] = { 0 };

	scanf("%d%d", &m, &n);

	num[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
		{
			num[i*j] = 1;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (num[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
