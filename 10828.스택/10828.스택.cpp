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
		if (stack[j] <= 0)
		{
			stack[j] = a;
			break;
		}
	}
}

int pop(int* stack, int n)
{
	int popn = 0;
	for (int j = 0; j < n; j++)
	{
		if (stack[j] <= 0)
		{
			if (j == 0)
			{
				popn = -1;
				break;
			}
			popn = stack[j - 1];
			stack[j - 1] = 0;
			break;
		}
	}
	return popn;
}

int size(int* stack, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (stack[j] <= 0)
		{
			return j;
			break;
		}
	}
}

int empty(int* stack, int n)
{
	if (stack[0] <= 0)
		return 1;
	else
		return 0;
}

int top(int* stack, int n)
{
	int topn = 0;
	for (int j = 0; j < n; j++)
	{
		if (stack[j] <= 0)
		{
			if (j == 0)
			{
				topn = -1;
				break;
			}
			topn = stack[j - 1];
			break;
		}
	}
	return topn;
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
			cout << size(stack, n) << "\n";
		}

		if (order == "empty")
		{
			cout << empty(stack, n) << "\n";
		}

		if (order == "top")
		{
			cout << top(stack, n) << "\n";
		}
	}
}