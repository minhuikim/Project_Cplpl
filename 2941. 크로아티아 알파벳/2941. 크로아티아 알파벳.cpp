#include <iostream>
using namespace std;

// = 61 / - 45 / c 99 / d 100 / z 122 / l 108 / j 106 / n 110 / s 115
// c= 160	c- 144	dz= 283	d- 145	lj 241	nj 216	s= 176	z= 183
int main()
{
	string text;
	int cnt = 0, k = 0;
	
	cin >> text;

	for(int i = 0; i < text.size(); i++)
	{
		if(i > 0)
		{
			if (text[i] == '=' || text[i] == '-')
			{
				if (i > 1 && text[i - 1] == 'z')
				{
					k++;

					if (text[i - 2] == 'd')
					{
						k++;
					}
				}
				else
				{
					k++;
				}
			}

			if (text[i] == 'j')
			{
				if (text[i - 1] == 'l' || text[i - 1] == 'n')
				{
					k++;
				}
			}
		}
		cnt++;
	}
	
	cout << (cnt - k);

	return 0;
}