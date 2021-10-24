#include <iostream>
using namespace std;

int main()
{
	// 2884. 알람시계
	int h, m;

	cin >> h >> m;

	m = m - 45;
	
	if (m < 0)
	{
		h = h - 1;
		m = 60 + m;
	}

	if (h < 0)
	{
		h = 24 + h;
	}

	cout << h << " " << m << endl;

	/* 다른 풀이
	int h, m;
	
	cin >> h >> m;

	int hm = 60 * h + m;

	if (hm < 45)
	{
		hm = hm + (24 * 60);
	}
	hm = hm - 45;
	h = hm / 60;
	m = hm % 60;

	cout << h << " " << m << endl;
	*/
}