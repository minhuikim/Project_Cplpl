#include <iostream>
using namespace std;

// 15552. ���� A+B (1�� �ȿ� �ִ� 1,000,000�� ���� ��,���)
int main()
{
	int a, b, t;
	scanf_s("%d", &t);

	for(int i=0; i<t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d", a + b);
		printf("\n");
	}
}