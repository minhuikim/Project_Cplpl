#include <iostream>
using namespace std;

// 11022. A+B -8 (입력받은 t의 회수만큼 a + b 한 후 Case #t: a + b = c의 형식으로 출력)
int main()
{
	int a, b, t;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << (a + b) << "\n";
	}
}