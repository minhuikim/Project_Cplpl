#include <iostream>
using namespace std;

//3052. ³ª¸ÓÁö
int main()
{
	int cnt, rs = 0;
	int arr[10] = {};

	for(int i=0; i<10; i++)
	{
		cin >> arr[i];

		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		cnt = 0;
		for (int j = (i+1); j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				cnt++;
			}
		}
		if (cnt == 0)
			rs++;
	}
	cout << rs;
}