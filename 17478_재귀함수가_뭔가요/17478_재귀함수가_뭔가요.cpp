#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void jh_say(int n, string s)
{	
	cout << s << "\"����Լ��� ������?\"\n";

	if (n == 0)
	{
		cout << s << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << s << "��� �亯�Ͽ���.\n";
		return;
	}

	cout << s << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	cout << s << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	cout << s << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	
	jh_say(n - 1, s + "____");

	cout << s << "��� �亯�Ͽ���.\n";
}

int main()
{
	int n;

	cin >> n;

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

	jh_say(n, "");

	return 0;
}