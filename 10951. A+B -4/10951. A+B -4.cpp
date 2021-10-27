#include <iostream>
using namespace std;

//10951. A + B - 4 (eof / 입력이 끝날 때까지 A+B를 출력)
int main()
{
	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (cin.eof() == true)
			break;

		cout << (a + b) << "\n";
	}
	return 0;

	/*
	EOF = End Of File
		파일의 끝에 도달하면 EOF를 리턴한다. (EOF == -1)

	cin.eof() : cin으로 입력받은 값이 없으면 cin.eof() == true를 반환한다.


	다른 풀이
	// scanf_s는 입력받은 갯수를 리턴
	while (scanf_s("%d%d", &a, &b) == 2)
	{
		 printf("%d\n", a + b);
	}
	*/
}