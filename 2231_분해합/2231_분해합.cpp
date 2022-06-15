#include <iostream>
using namespace std;

int main()
{
	int n, m = 0, num = 0;

	cin >> n;

	for (int i = 1; i <= 1000000; i = i * 10)
	{
		cout << m << "\n";
		num = (n % i);
		m = m + num;
	}

	cout << m + n;
}