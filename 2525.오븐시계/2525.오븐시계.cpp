#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;

	b = b + c;

	a = a + (b / 60);
	b = b % 60;

	if (a > 23)
		a = a - 24;

	cout << a << " " << b;
}