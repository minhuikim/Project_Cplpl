#include <iostream>
using namespace std;

//2438. for�� ����� -1 (ù°�� �� 1�� ��°�� �� 2�� n�� �� �� n��)
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

	// �ٸ� Ǯ��
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