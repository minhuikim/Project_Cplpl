#include <iostream>
using namespace std;

//2438. for문 별찍기 -1 (첫째줄 별 1개 둘째줄 별 2개 n번 줄 별 n개)
int main()
{
	int n;
	string star = "";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		star += "*";

		cout << star << "\n";
	}

	// 다른 풀이
	/*int m, i, j;

	scanf_s("%d", &m);
	 
	for(i=0; i<m; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
}