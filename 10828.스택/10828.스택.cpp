#include <iostream>
#include <string>
using namespace std;

/* 
* @parameter 배열, 배열 크기, 입력할 요소
*/
void push(int* stack, int n, int a)
{
	for (int j = 0; j < n; j++)
	{
		if (stack[j] < 0)
		{
			stack[j] = a;
			break;
		}
	}
}

int pop(int* stack, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (stack[j] < 0)
		{
			return stack[j-1];
			break;
		}
	}
}

int size(int* stack, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (stack[j] < 0)
		{
			return j;
			break;
		}
	}
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
	//int stack[10000] = {0};
	//stack[n] = { -1 };

	for (int i = 0; i < n; i++)
	{
		// 명령 입력
		cin >> order;

		// push는 입력값도 함께 받는다.
		if (order.find("push") == 0)
		{
			cin >> pnum;
			push(stack, n, pnum);
		}

		if (order == "pop")
		{
			cout << pop(stack, n) << "\n";
		}

		if (order == "size")
		{
			if (stack[0] > 0)
				cout << size(stack, n) << "\n";
			else
				cout << 0 << "\n";
		}
	}
}