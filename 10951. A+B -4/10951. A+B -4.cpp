#include <iostream>
using namespace std;

//10951. A + B - 4 (eof / �Է��� ���� ������ A+B�� ���)
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
		������ ���� �����ϸ� EOF�� �����Ѵ�. (EOF == -1)

	cin.eof() : cin���� �Է¹��� ���� ������ cin.eof() == true�� ��ȯ�Ѵ�.


	�ٸ� Ǯ��
	// scanf_s�� �Է¹��� ������ ����
	while (scanf_s("%d%d", &a, &b) == 2)
	{
		 printf("%d\n", a + b);
	}
	*/
}