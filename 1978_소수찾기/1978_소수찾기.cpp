#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n, cnt = 0, flag;
	int num[100] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		flag = 0;

		scanf("%d", &num[i]);

		if (num[i] <= 1)
			continue;

		for (int j = 2; j <= num[i]; j++)
		{
			if (num[i] % j == 0)
				flag++;
		}

		if (flag == 1)
		{
			cnt++;
		}
	}
	

	printf("%d", cnt);

	return 0;
}