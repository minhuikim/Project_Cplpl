#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[1000000];
	int cnt = 1;

	cin.getline(a, 1000000, '\n');

	for (int i = 0; i < strlen(a); i++)
	{
		// 문자열 중간에 공백이 있으면 1 증가
		if (i > 0 && a[i] == ' ' && i < strlen(a)-1)
		{
			cnt++;
		}

		// 문자가 1개인데 공백이면 0
		if (strlen(a) == 1 && a[i] == ' ')
		{
			cnt = 0;
		}
	}

	cout << cnt;

	return 0;
}