#include <bits/stdc++.h>
using namespace std;

void func1() // overflow
{
	// 128번을 거쳐서 hi를 출력하는 함수
	// s = 127 => s++ => -128 overflow
	for (char s = 0; s < 128; s++) // invinity loop
		cout << "hi";
}

int func2() {
	// 50!를 61로 나눈 나머지를 반환하는 함수
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}

int func3() {
	// 10의 10 거듭제곱을 1000000007로 나눈 나머지를 반환하는 함수
	// 10억까지는 overflow가 걸리지 않지만 10억에 10을 곱하게 되면 100억으로 Integer OverFlow에 걸린다.
	int a = 10;
	int mod = 1000000007;
	for (int i = 0; i < 10; i++) {
		a = 10 * a % mod;
	}
	
	return a;
}

int main()
{
	//func1();
	cout << func2() << "\n";
	cout << func3() << "\n";
	return 0;
}