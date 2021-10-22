#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 알고리즘 풀이
int main() 
{
	// 1001. A-B (두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램 작성)
	int A, B, C;
	std::cin >> A >> B;
	std::cout << A - B;

	// 1001. 다른 풀이
	scanf("%d %d", &A, &B);
	printf("%d", A - B);
	return 0;
	

	// 10869. 사칙연산 (A+B, A-B, A*B, A/B, A%B 출력)
	cin >> A >> B;
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;

	// 10430. 나머지 ((A+B)%C, ((A%C) + (B%C))%C, (A×B)%C, ((A%C) × (B%C))%C 출력)
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	// 2588. 곱셈 (곱셈의 과정을 모두 출력)
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