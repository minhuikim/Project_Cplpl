#include <iostream>
using namespace std;

int main()
{
	string s;
	int c[26] = {};
	int j = 0;

	cin >> s;

	// ���ĺ� abc...
	for (char ch='a'; ch<='z'; ch++)
	{
		// �ܾ� �պ���..
		for(int i = 0; i < (int)s.size(); i++) 
		{
			// ��ġ�ϸ� ���� �Է�
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
