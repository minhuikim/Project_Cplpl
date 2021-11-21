#include <iostream>
using namespace std;

// n = 91
// d(n) = n+(n/10)+(n%10)
// 101 = 91+9+1
long d(int n)
{
	int npl;
	
	for(int i=10; i<10000; i=i*10)
	{
		npl = n + (n / i) + (n % i);
	}
}

int main()
{
	int n;

	for (int i = 0; i <= 10000; i++)
	{
		cout << d(n);
	}
}