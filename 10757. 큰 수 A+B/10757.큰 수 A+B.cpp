#include <iostream>
#include <string.h>

void reverse(char arr[])
{
	int len = strlen(arr);

	for (int i = 0; i < len / 2; i++)
	{
		char x = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = x;
	}
}

int main()
{
	char strA[10002] = { 0 };
	char strB[10002] = { 0 };
	char ans[10003] = { 0 };
	int len, up = 0;
	
	std::cin >> strA >> strB;

	if (strlen(strA) > strlen(strB))
	{
		len = strlen(strA);
	}
	else
	{
		len = strlen(strB);
	}

	reverse(strA);
	reverse(strB);

	for (int i = 0; i < len; i++)
	{
		if (!strA[i]) strA[i] = '0';
		if (!strB[i]) strB[i] = '0';

		int c = (strA[i] - '0') + (strB[i] - '0') + up;

		if (c >= 10)
		{
			ans[i] = (c - 10) + '0';
			up = 1;
		}
		else
		{
			ans[i] = c + '0';
			up = 0;
		}

		if (i == len - 1 && up == 1)
			ans[i + 1] = '1';
	}

	reverse(ans);

	std::cout << ans;
	return 0;
}