// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 10869. 사칙연산
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
using namespace std;

void calc(int& a, int& b) // Call by Reference
{
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	
	calc(a, b);

	return 0;
}