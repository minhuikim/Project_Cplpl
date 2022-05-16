#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int fibonacci(int n, int cnt, int fibo[])
int fibonacci(int n)
{
	// Fn = Fn-1 + Fn-2
	// F[cnt] = F[cnt-1] + F[cnt-2]

	if (n < 2)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);

	/*
	fibo[0] = 0;

	if (n > 0 && cnt < 1)
	{
		cnt++;
		fibo[cnt] = cnt;
		return fibonacci(n - 1, cnt, fibo);
	}
	else if (n > 0)
	{
		cnt++;
		fibo[cnt] = fibo[cnt - 1] + fibo[cnt - 2];
		return fibonacci(n - 1, cnt, fibo);
	}
	else
		return fibo[cnt];
	*/
	
}

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", fibonacci(n));

	//printf("%d", fibonacci(n, 0, arr));

	return 0;
}