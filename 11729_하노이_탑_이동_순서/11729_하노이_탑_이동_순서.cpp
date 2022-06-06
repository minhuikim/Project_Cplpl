#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int a, int b, int c)
{
	if (n == 0) return;

	hanoi(n - 1, a, c, b);

	cout << a << " " << c << endl;

	hanoi(n - 1, b, a, c);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;

	cin >> n;

	k = pow(2, n) - 1;

	cout << k << endl;

	hanoi(n, 1, 2, 3);
}