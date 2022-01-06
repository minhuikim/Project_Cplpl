#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	char text[101];
	int n, cnt;

	scanf("%d", &n);

	cnt = n;

	for (int i = 0; i < n; i++)
	{
		char a = '0';
		int alpha[26]{ 0, };

		scanf("%s", text);

		for (int j = 0; text[j] != '\0'; j++)
		{
			if (a != text[j])
			{
				a = text[j];
				alpha[text[j] - 'a']++;
			}

			if (alpha[text[j] - 'a'] == 2)
			{
				cnt -= 1;
				break;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}