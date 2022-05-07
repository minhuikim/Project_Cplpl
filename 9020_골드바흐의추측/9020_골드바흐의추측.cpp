#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t, n, n1, n2, a, b, flag;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);

		flag = 0;
		n1 = n / 2;

		for (int j = 2; j <= n1; j++)
		{
			if (n1 % j == 0)
			{
				flag++;
			}
			
			if (flag == 2) break;

			a = j;
		}

		b = n - a;

		printf("%d %d", a, b);
	}

	return 0;
}