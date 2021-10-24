#include <iostream>
using namespace std;

int main()
{
	// 1330. 두 수 비교하기 (두 정수 a, b를 비교)
	int a, b;
	cin >> a >> b;

	if (a > b)
	{
		cout << ">";
	}
	else if (a < b)
	{
		cout << "<";
	}
	else
	{
		cout << "==";
	}
}