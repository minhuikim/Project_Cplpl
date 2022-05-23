#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
using namespace std;

void p_star(int n, int s)
{
	if (n == 0) return;

	if(s <= 0)
	{
		printf("\n");
		return p_star(n - 1, n);
	}
	else
	{
		if (n % 2 == 0 && s % 2 == 0)
		{
			printf(" ");
		}
		else
		{
			printf("*");
		}
		return p_star(n, s - 1);
	}
	
}

int main()
{
	int n;

	scanf("%d", &n);

	p_star(n, n);
}
