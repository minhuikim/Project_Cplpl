#include <iostream>
using namespace std;

int main()
{
	// 9498. 시험 성적 (입력받은 점수에 맞는 성적 출력)
	int score = 0;
	char grade;

	cin >> score;
	switch(score/10)
	{
		case 10 :
		case 9 :
			grade = 'A';
			break;
		case 8 :
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default :
			grade = 'F';
			break;
	}
	cout << grade;
}