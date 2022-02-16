// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 1003. 피보나치 함수
// https://www.acmicpc.net/problem/1003
// https://www.acmicpc.net/source/38984707

// Idea
// 시간제한이 0.25초에 N이 40이므로 재귀법을 쓰면 시간초과가 날 확률이 매우 높다.
// 예제를 보면 알 수 있다.
// Input :  zero , one
//  0        1      0
//  1        0      1
//  3        1      2
//  6        5      8
// 22      10946  17711

// 뭔가 피보나치 수열이 반복되는 느낌이다.
// 빈칸을 메워보자
// Input :  zero , one   fibo[n]
//  0        1      0       0
//  1        0      1       1
//  2        1      1       1
//  3        1      2       2
//  4        2      3       3
//  5        3      5       5
//  6        5      8       8
// ....................
// 22      10946  17711
// 그렇다 one은 피보나치 수열만큼 호출 되고 zero는 fibo -1만큼 호출된다.
// 0일때만 특수케이스로 반전 호출 하면 된다.

#include <bits/stdc++.h>
using namespace std;

int fibo[43];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;

	for (int i = 3; i < 41; i++) 
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	
	
	while (testCase--)
	{
		int n;
		cin >> n;
		if (n == 0)
			cout << fibo[1] << " " << fibo[0] << "\n";
		else
			cout << fibo[n - 1] << " " << fibo[n] << "\n";
	}

	return 0;
}