#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, cnt;

	int dec[123457] = { 0 };

	dec[1] = 1;
	for (int i = 2; i <= 123456; i++)
	{
		if (dec[i] == 1) continue;

		for (int j = 2; i * j <= 123456; j++)
		{
			dec[i * j] = 1;
		}
	}

	while(1)
	{
		cnt = 0;

		scanf("%d", &n);

		if (n == 0) break;

		for (int i = n; i <= n * 2; i++)
		{
			if (dec[i] == 0) cnt++;
		}

		printf("%d", cnt);
	}

	return 0;
}