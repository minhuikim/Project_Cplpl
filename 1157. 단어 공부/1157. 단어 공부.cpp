#include <iostream>
using namespace std;

int main()
{
	char text[1000000];
	char* pt;
	int alpha[26] = {0};
	int az, max;
	bool flag;

	cin >> text;

	pt = text;
	while (*pt)
	{
		if (*pt >= 'a' && *pt <= 'z')
		{
			*pt = *pt - 'a' + 'A';
		}
		alpha[*pt - 65]++;
		pt++;
	}

	max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			az = i;
			flag = true;
		}
		else if (max == alpha[i])
		{
			flag = false;
		}
	}

	if (flag)
	{
		cout << char(az + 65);
	}
	else
	{
		cout << "?";
	}

	return 0;
}