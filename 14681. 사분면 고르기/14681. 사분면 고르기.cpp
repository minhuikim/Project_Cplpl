#include <iostream>
using namespace std;

int main()
{
	// 14681. 사분면 고르기
	int x, y;
	cin >> x >> y;

	if (x == 0 || y == 0)
	{
		return false;
	}
	else
	{
		if (x > 0 && y > 0)
		{
			cout << "1";
		}
		else if (x > 0 && y < 0)
		{
			cout << "4";
		}
		else if (x < 0 && y > 0)
		{
			cout << "2";
		}
		else
		{
			cout << "3";
		}
	}
}