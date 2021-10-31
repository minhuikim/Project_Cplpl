#include <iostream>
using namespace std;

//2562. ÃÖ´ñ°ª
int main()
{
	int arr[9] = {};
	int max = -1, cnt;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			cnt = i + 1;
		}
	}
	cout << max << "\n" << cnt << endl;

	return 0;
}