#include <iostream>
using namespace std;

// 15552. 빠른 A+B (1초 안에 최대 1,000,000의 덧셈 입,출력)
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