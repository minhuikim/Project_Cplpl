#include <iostream>
using namespace std;

int main()
{
	// ����Ʈ ����� ����	
	int apt[15][15] = {};

	for (int i = 1; i <= 14; i++)
	{
		apt[0][i] = i;
		apt[i][1] = 1;
	}

	for (int i = 1; i <= 14; i++)
	{
		for (int j = 2; j <= 14; j++)
		{
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}

	// ���ϴ� ��ȣ
	int t, k, n, man;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;

		cout << apt[k][n] << "\n";
	}

	return 0;
}