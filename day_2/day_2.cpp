#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// �˰��� Ǯ��
int main() 
{
	// 1001. A-B (�� ���� A�� B�� �Է¹��� ����, A-B�� ����ϴ� ���α׷� �ۼ�)
	int A, B, C;
	std::cin >> A >> B;
	std::cout << A - B;

	// 1001. �ٸ� Ǯ��
	scanf("%d %d", &A, &B);
	printf("%d", A - B);
	return 0;
	

	// 10869. ��Ģ���� (A+B, A-B, A*B, A/B, A%B ���)
	cin >> A >> B;
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;

	// 10430. ������ ((A+B)%C, ((A%C) + (B%C))%C, (A��B)%C, ((A%C) �� (B%C))%C ���)
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	// 2588. ���� (������ ������ ��� ���)
	cin >> A;
	cin >> B;
	int n = B;

	while (n != 0)
	{
		cout << A * (n % 10) << "\n";
		n = n / 10;
	}
	cout << A * B << endl;

}