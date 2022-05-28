#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
using namespace std;

void p_star(const int n, int i, int j)
{
	if (j == n) return;


	if (i == n)
	{
		printf("\n");
		return p_star(n, 0, j + 1);
	}

	if (i % 3 == 1 && j % 3 == 1)
	{
		printf(" ");
		return p_star(n, i + 1, j);
	}
	else
	{
		printf("*");
		return p_star(n, i + 1, j);
		
	}	
}


int main()
{
	int n;

	scanf("%d", &n);

	p_star(n, 0, 0);
}
