#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main() 
{
	int m, n, flag, sum = 0, min = 0;

	scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		flag = 0;
		if (i <= 1) continue;

		for (int j = 2; j <= i; j++)
		{
			if (flag > 1) continue;

			if (i % j == 0)
			{
				flag++;
			}
		}

		if (flag == 1)
		{
			if (min == 0) min = i;
			sum += i;
		}
	}

	if (sum && min)
		printf("%d\n%d", sum, min);
	else
		printf("%d", -1);

	return 0;
}