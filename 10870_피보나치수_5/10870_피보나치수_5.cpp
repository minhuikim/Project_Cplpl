#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fivonacci(int n, int cnt, int fivo[])
{
	// Fn = Fn-1 + Fn-2
	// F[cnt] = F[cnt-1] + F[cnt-2]

	fivo[0] = 0;

	if (n > 0 && cnt < 1)
	{
		cnt++;
		fivo[cnt] = cnt;
		return fivonacci(n - 1, cnt, fivo);
	}
	else if (n > 0)
	{
		cnt++;
		fivo[cnt] = fivo[cnt - 1] + fivo[cnt - 2];
		return fivonacci(n - 1, cnt, fivo);
	}
	else
		return fivo[cnt];
	
}

int main()
{
	int n, arr[20] = { 0 };

	scanf("%d", &n);

	printf("%d", fivonacci(n, 0, arr));

	return 0;
}