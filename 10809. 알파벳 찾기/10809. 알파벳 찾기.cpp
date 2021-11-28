#include <iostream>
using namespace std;

int main()
{
	string s;
	char abc[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',	'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	int c[26] = {};

	cin >> s;

	// 알파벳 abc...
	for (int j = 0; j < 26; j++)
	{
		// 단어 앞부터..
		for(int i = 0; i < (int)s.size(); i++) 
		{
			// 일치하면 순서 입력
			if (s[i] == abc[j])
			{
				c[j] = i;
				break;
			}
			else
			{
				c[j] = -1;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << c[i] << " ";
	}

	return 0;
}
