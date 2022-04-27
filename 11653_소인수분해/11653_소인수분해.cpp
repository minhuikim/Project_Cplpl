#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int n;

	scanf("%d", &n);

	if (n == 1) exit;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
			i = 1;
			if (n != 1) printf("\n");
		}
	}

	return 0;
}