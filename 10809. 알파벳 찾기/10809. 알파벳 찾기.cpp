#include <iostream>
using namespace std;

int main()
{
	string s;
	int c[26] = {};
	int j = 0;

	cin >> s;

	// 알파벳 abc...
	for (char ch='a'; ch<='z'; ch++)
	{
		// 단어 앞부터..
		for(int i = 0; i < (int)s.size(); i++) 
		{
			// 일치하면 순서 입력
			if (s[i] == ch)
			{
				c[j] = i;
				break;
			}
			else
			{
				c[j] = -1;
			}
		}
		j++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << c[i] << " ";
	}

	return 0;
}
