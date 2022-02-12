#include <iostream>
#include <string>
using namespace std;

/* 
* @parameter �迭, �迭 ũ��, �Է��� ���
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

	// ��� ȸ�� �Է�
	cin >> n;

	// ��� ȸ����ŭ ���� �迭 ũ�� ����
	int* stack = new int[n];
	//int stack[10000] = {0};
	//stack[n] = { -1 };

	for (int i = 0; i < n; i++)
	{
		// ��� �Է�
		cin >> order;

		// push�� �Է°��� �Բ� �޴´�.
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