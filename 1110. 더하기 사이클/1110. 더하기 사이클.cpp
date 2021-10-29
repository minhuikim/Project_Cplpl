#include <iostream>
using namespace std;

//1110. 더하기 사이클
int main()
{
	int in, a, e, cnt = 0;

	cin >> in;
	e = in;

	while(e>=0)
	{
		a = (e / 10) + (e % 10);
		e = ((e % 10) * 10) + a % 10;

		cnt++;
		if(in == e)
		{
			cout << cnt;
			break;
		}
	}
}