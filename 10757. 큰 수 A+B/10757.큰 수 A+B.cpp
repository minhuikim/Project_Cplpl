#include <iostream>



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
	int len;

	std::cin >> strA >> strB;

	if (strA > strB)
		len = strlen(strA);
	else
		len = strlen(strB);

	reverse(strA);
	reverse(strB);

	std::cout << strA << " " << strB;

	return 0;
}