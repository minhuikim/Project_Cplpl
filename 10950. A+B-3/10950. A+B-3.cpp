#include <iostream>
using namespace std;

// 10950. A+B-3 (입력받은 개수만큼 a, b 더하기)
int main()
{
	int t, a, b;

	cin >> t;
		
	for(int i=0; i<t; i++)
	{
		cin >> a >> b;

		cout << (a + b) << "\n";
	}

}