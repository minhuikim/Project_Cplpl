#include <iostream>
#include <string>
using namespace std;

void push(int *stack, int a)
{
	cout << sizeof(stack) << "\n";
	for (int j = 0; j < sizeof(stack); j++)
	{
	}
	cout << stack[0] << "\n";
	cout << a;
}

int pop(int* stack)
{
	return 111;
}

int size()
{
	return 0;
}

int empty()
{
	return 0;
}

int top()
{
	return 0;
}

int* stack;
int main()
{
	int n;
	int pnum;
	string order;

	// 명령 회수 입력
	cin >> n;

	// 명령 회수만큼 스택 배열 크기 생성
	int* stack = new int[n];
	//stack[n] = { -1 };

	for (int i = 0; i < n; i++)
	{
		// 명령 입력
		cin >> order;

		// push는 입력값도 함께 받는다.
		if (order.find("push") == 0)
		{
			cin >> pnum;
			push(stack, pnum);
		}

		if (order == "pop")
		{
			cout << pop(stack);
		}
	}
}