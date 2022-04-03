#include <iostream>
using namespace std;
// 1. 정수 자료형
// Char : 1 Byte (1 bit)
// 의미는?
// 0 0 0 0 0 0 0 0 : 8개의 각 칸을 1과 0을 이용해서 숫자를 부여한다.
// 2^-7 부호비트 
// 고로 unsigned char : 0 ~ 255
//               char : -128 ~ 127
// short 2 byte(16bit) : 2^15 - 1 수 표현 가능
// int 4 byte (32bit) : 2^31 - 1 수 표현 가능 (2.1 * 10^9)
// long long (64bit) : 2^63 - 1 수 표현 가능 ( 9.2 * 10.18)


// 2. 실수 자료형
// 실수의 저장 연산 과정에서는 반드시 오차가 발생할수 밖에 없다.
// double에 long long 변수를 함부러 담으면 안된다.
// 실수를 비교할 때는 등호를 사용하면 안된다.
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 2000000000 * 2;
	cout << a << "\n";
	// result : -294967296

	if (0.1 + 0.1 + 0.1 == 0.3)
		cout << "true" << "\n";
	else
		cout << " No!!! " << "\n";

	double k = 1000000000000000001;
	double l = 1000000000000000000;

	if (k == l)
		cout << "wow" << "\n";
	else
		cout << " Oh.... " << "\n";

	double m = 0.1 + 0.1 + 0.1;
	double n = 0.3;

	// float은 유효 숫자 6자리
	// double은 유효숫자 15자리

	if (m == n)
		cout << "m == n !!!!" << "\n";
	if (abs(m - n) < 1e-12)
		cout << "same!!!! " << "\n";
	else
		cout << " N.........." << "\n";

	return 0;
}