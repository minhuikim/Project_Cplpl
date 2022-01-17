#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	/*
		1 + 1 = 2 + 7  = 9  + 13 = 22 + 19 = 41 + 25 = 66
		1 + 2 = 3 + 8  = 11 + 14 = 25 + 20 = 45 + 26 = 71
		1 + 3 = 4 + 9  = 13 + 15 = 28 + 21 = 49 + 27 = 76
		1 + 4 = 5 + 10 = 15 + 16 = 31 + 22 = 53 + 28 = 81
		1 + 5 = 6 + 11 = 17 + 17 = 34 + 23 = 57 + 29 = 86
		1 + 6 = 7 + 12 = 19 + 18 = 37 + 23 = 60 + 30 = 90

				1		 2		    3		  4			5

	*/
	
	int a = 1, n, m;

	cin >> n;

	m = n / 5;

	return 0;
}