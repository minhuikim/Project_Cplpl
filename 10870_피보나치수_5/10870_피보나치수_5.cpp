#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n)
{
	// Fn = Fn-1 + Fn-2

	if (n < 2)
		return n;

	printf("%d\n", n);

	return fibonacci(n - 1) + fibonacci(n - 2);
		
}

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", fibonacci(n));

	return 0;
}