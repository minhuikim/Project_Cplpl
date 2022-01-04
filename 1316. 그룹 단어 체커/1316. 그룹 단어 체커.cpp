#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 0;
	int alpha[26] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char text[101] {};
		int k = 1;
		int alpha[26]{ 0, };
		bool check = true, check_2 = true;

		scanf("%s", text);
		printf("%s\n", text);

		for (int j = 0; text[j] != '\0'; j++)
		{
			if(text[j] != text[j - 1])
			{
				alpha[text[j] - 97] = 1;
				check = false;
			}
			
			if (alpha[text[j] - 97] == 1)
			{
				cout << "[2]" << " / ";
				if (check == false)
				{
					cout << "[3]" << " / ";
					check_2 == false;
					continue;
				}
			}
			k++;
			cout << k << "\n";
		}

		if (check_2 == true)
		{
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}