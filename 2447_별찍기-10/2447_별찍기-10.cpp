#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
using namespace std;

void p_star(const int n, int i, int j, int k)
{
	if (j == n) return;


	if (i == n)
	{
		printf("\n");
		return p_star(n, 0, j + 1, k);
	}

	if ((i / k) % 3 == 1 && (j / k) % 3 == 1)
	{
		printf(" ");
		return p_star(n, i + 1, j, k * 3);
	}
	else if (i % 3 == 1 && j % 3 == 1)
	{
		printf(" ");
		return p_star(n, i + 1, j, k);
	}
	else
	{
		printf("*");
		return p_star(n, i + 1, j, k);
		
	}	
}


int main()
{
	int n;

	scanf("%d", &n);

	p_star(n, 0, 0, 1);
}
