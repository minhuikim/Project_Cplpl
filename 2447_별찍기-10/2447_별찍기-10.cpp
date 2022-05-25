#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
using namespace std;

int k_num(int n, int k)
{
	if (n == 1)
		return k;
	else
		return k_num(n / 3, k + 1);
}

void p_star(const int n, int i, int j, int k)
{
	if (j == 1) return;


	if (i == 1)
	{
		printf("\n");
		return p_star(n, n, j - 1, k);
	}

	if (i % 2 != 0 && j % 2 != 0)
	{
		printf(" ");
		return p_star(n, i - 1, j, k);
	}
	else
	{
		printf("*");
		return p_star(n, i - 1, j, k);
		
	}

	
}

int main()
{
	int n, k;

	scanf("%d", &n);

	k = k_num(n, 0);

	//p_star(n, 0, k);

	n++;

	p_star(n, n, n, k);
}

/*

if (n == 0) return;

	if(s == n)
	{
		printf("0\n");
		return p_star(n - 1, 1, k);
	}
	else
	{
		if (n % 2 == 0 && s % 2 == 0)
		{
			printf("-");
		}
		else
		{
			printf("*");
		}
		return p_star(n, s + 1, k);
	}
	*/