#include <iostream>
using namespace std;

// A = 65 / Z = 90
int main()
{
	string diar;
	int alpha[26]{ 0, };
	int time, rs = 0;

	cin >> diar;

	for (char c : diar)
	{
		alpha[c - 'A']++;
	}

	for (int i = 0; i <= 'Z' - 'A'; i++)
	{
		if (i == 'S' - 'A' || i == 'V' - 'A')
		{
			rs += (i / 3 + 2) * alpha[i];
			continue;
		}
		if (alpha[i])
		{
			time = i / 3 + 3;
			rs += (time > 9) ? 10 * alpha[i] : time * alpha[i];
		}
	}

	cout << rs;

	return 0;
}