#include <iostream>
using namespace std;

//10871. X보다 작은 수
/*
	1. n, x 입력
	2. 입력받은 n의 개수만큼 숫자 입력(p)
	3. p입력 후 x보다 작은 수를 순서대로 출력
*/
int main()
{
	int n, x;
	int* p;

	cin >> n >> x;
	p = new int[n];
	
	for (int k = 0; k < n; k++)
	{
		cin >> p[k];
	}

	for (int i = 0; i < n; i++)
	{
		if (p[i] < x)
		{
			cout << p[i] << " ";
		}
	}

	delete p;
}