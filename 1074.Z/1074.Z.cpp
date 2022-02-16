#include <iostream>
using namespace std;

int recursion(const int r, const int c, int** z, const int a)
{
	int ans = 0;

	cout << sizeof(z);

	return ans;

	//recursion(r, c, z, a);
}

int main()
{
	int n, r, c;
	int a = 1;

	cin >> n >> r >> c;

	for (int i = 0; i < n; i++)
	{
		a = a * 2;
	}
	
	int** z;
	z = new int* [a];
	for (int i = 0; i < a; i++)
	{
		z[i] = new int[a];
	}
	z[0][0] = 1;

	cout << z[0][0];

	recursion(r, c, z, a);

	return 0;
}