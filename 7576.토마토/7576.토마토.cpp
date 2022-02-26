#include <iostream>
using namespace std;

int main()
{
	int m, n, day = 0, ripe = 0;
	char flag = 'Y';

	cin >> m >> n;

	int** arr = new int*[m];
	for (int i = 0; i < m; i++)
		arr[i] = new int[n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = -1;
			cin >> arr[i][j];

			if (arr[i][j] == 1)
			{
				ripe++;
			}
		}
	}

	if (ripe == m * n)
	{
		cout << ripe;
	}

	flag = 'Y';
	while(flag == 'Y')
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// 익은토마토 존재시 상하좌우 익음, day+1
				if (arr[i][j])
				{
					if (arr[i][j + 1] != -1)
						arr[i][j + 1] = 1;
					if (arr[i][j - 1] != -1)
						arr[i][j - 1] = 1;
					if (arr[i-1][j] != -1)
						arr[i-1][j] = 1;
					if (arr[i+1][j] != -1)
						arr[i+1][j] = 1;
					day++;
					flag = 'N';
				}
				else
					flag = 'Y';
			}
		}
	}

	
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}