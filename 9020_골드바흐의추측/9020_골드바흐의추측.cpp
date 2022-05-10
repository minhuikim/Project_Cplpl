#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dec[10001] = { 0 };

	for (int i = 2; i < sizeof(dec) / 4; i++)
	{
		if (i > 2 && i % 2 == 0) continue;

		for (int j = 2; i * j < sizeof(dec) / 4; j++)
		{
			dec[i * j] = 1;
		}
	}

	int t, n, flag, h;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);

		h = n / 2;

		for (int j = h; j > 1; j--)
		{
			if (dec[j] == 0 && dec[n - j] == 0)
			{
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}


	return 0;
}