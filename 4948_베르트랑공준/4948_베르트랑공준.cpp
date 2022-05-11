#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dec[123456 * 2 + 1] = {0, };
	int n, cnt;

	dec[1] = 1;
	for (int i = 2; i <= sizeof(dec)/4; i++)
	{
		if (i > 2 && i % 2 == 0) continue;
		for (int j = 2; i * j <= sizeof(dec) / 4; j++)
		{
			dec[i * j] = 1;
		}
	}

	while(1)
	{
		scanf("%d", &n);

		if (n == 0) break;

		cnt = 0;

		for (int i = n + 1; i <= n * 2; i++)
		{
			if (dec[i] == 0) cnt++;
		}

		printf("%d\n", cnt);
	}
	

	return 0;
}