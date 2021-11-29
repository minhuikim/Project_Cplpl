#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S, P;
	int T, R;

	cin >> T;

	if (T > 1000) T = 1000;

	for (int i = 0; i < T; i++)
	{
		cin >> R;
		if (R > 8) R = 8;
		cin >> S;

		for (int j = 0; j < S.length(); j++)
		{
			for(int k = 0; k < R; k++)
			{
				P += S[j];
			}
		}
		P += "\n";
	}

	cout << P;

	return 0;
}