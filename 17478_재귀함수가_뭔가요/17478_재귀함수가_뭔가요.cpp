#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string jh_say(int n, string s)
{	
	if (n == 0)
	{
		cout << s << "\"����Լ��� ������?\"\n";
		cout << s << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << s << "��� �亯�Ͽ���.\n";
		return jh_say(n - 1, s.erase(0, 4));
	}

	if (n > 0)
	{
		cout << s << "\"����Լ��� ������?\"\n";
		cout << s << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << s << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << s << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

		return jh_say(n - 1, s + "____");
	}
	else
	{
		cout << s << "��� �亯�Ͽ���.\n";
		if (s != "")
			return jh_say(n, s.erase(0, 4));
		else
			return "";
	}
}

int main()
{
	int n;

	cin >> n;

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

	jh_say(n, "");

	return 0;
}