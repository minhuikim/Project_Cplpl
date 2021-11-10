#include <iostream>
#include <cstring>
using namespace std;

// strlen사용하려면 cstring 추가

// 8958. OX퀴즈
int main()
{
	int num, score, add_score;
	char ox[80];

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		score = 0;
		add_score = 0;

		cin >> ox;

		for (int j = 0; j < strlen(ox); j++)
		{
			if (ox[j] == 'O')
			{
				score++;
				add_score += score;
			}
			else
			{
				score = 0;
			}
		}

		cout << add_score << "\n";
	}

	return 0;

}