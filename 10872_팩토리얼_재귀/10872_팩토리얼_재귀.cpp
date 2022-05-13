#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n)
{
	if (n > 1)
		return n *= add(n - 1);
	else
		return 1;
}

int main()
{
	int n, fac;

	scanf("%d", &n);

	printf("%d", add(n));

	return 0;
}