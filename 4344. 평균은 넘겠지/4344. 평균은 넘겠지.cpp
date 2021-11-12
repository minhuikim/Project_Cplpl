#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c, n;
	double all_score, all_ave, more_ave, cnt;

	scanf_s("%d", &c);

	for (int i = 0; i < c; i++)
	{
		all_ave = all_score = cnt = 0;
		scanf_s("%d", &n);
		int* score = new int[n];
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &score[j]);
			all_score += score[j];
		}
		all_ave = (double)(all_score / n);
		for (int k = 0; k < n; k++)
		{
			if (score[k] > all_ave)
			{
				cnt++;
			}
		}
		more_ave = (double)(cnt/n)*100;
		more_ave = round(more_ave * 1000) / 1000;
		printf("%.3lf%s \n", more_ave, "%");
	}

	return 0;
}