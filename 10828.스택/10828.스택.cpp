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

	// ��� ȸ�� �Է�
	cin >> n;

	// ��� ȸ����ŭ ���� �迭 ũ�� ����
	int* stack = new int[n];
	//stack[n] = { -1 };

	for (int i = 0; i < n; i++)
	{
		// ��� �Է�
		cin >> order;

		// push�� �Է°��� �Բ� �޴´�.
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