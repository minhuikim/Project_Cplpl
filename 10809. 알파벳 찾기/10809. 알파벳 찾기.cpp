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

	// ���ĺ� abc...
	for (int j = 0; j < 26; j++)
	{
		// �ܾ� �պ���..
		for(int i = 0; i < (int)s.size(); i++) 
		{
			// ��ġ�ϸ� ���� �Է�
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
