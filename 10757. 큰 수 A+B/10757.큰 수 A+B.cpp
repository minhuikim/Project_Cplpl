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

	if (strA > strB)
		len = strlen(strA);
	else
		len = strlen(strB);

	reverse(strA);
	reverse(strB);

	for (int i = 0; i < len; i++)
	{
		strA[i] = strA[i] - '0';
		strB[i] = strB[i] - '0';

		int c = strA[i] + strB[i] + up;
		
		while (c < 0) c += '0';

		if (c > 9) up = 1;
		else up = 0;

		ans[i] = c % 10 + '0';
	}

	if (up == 1) ans[len] = '1';

	reverse(ans);

	std::cout << ans;

	return 0;
}