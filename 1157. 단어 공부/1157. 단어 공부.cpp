#include <iostream>
#include <string>
using namespace std;

int main()
{
	char word[1000001] = {};
	int alpha[26];
	int num, max, select;

	cin >> word;

	for(int i=0; i<=strlen(word); i++)
	{
		if (word[i] > 'A' && word[i] <= 'Z')
		{
			num = word[i] - 'A';
		}
		else if (word[i] >= 'a' && word[i] <= 'z')
		{
			num = word[i] - 'a';
		}

		alpha[num]++;
	}

	max = alpha[0];

	for (int i = 1; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			select = i;
		}
	}


}