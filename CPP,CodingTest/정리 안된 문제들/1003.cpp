// BOJ 1003
// �Ǻ���ġ �Լ�
// https://www.acmicpc.net/problem/1003


// Idea
// �ð������� 0.25�ʿ� N�� 40�̹Ƿ� ��͹��� ���� �ð��ʰ��� �� Ȯ���� �ſ� ����.
// ������ ���� �� �� �ִ�.
// Input :  zero , one
//  0        1      0
//  1        0      1
//  3        1      2
//  6        5      8
// 22      10946  17711

// ���� �Ǻ���ġ ������ �ݺ��Ǵ� �����̴�.
// ��ĭ�� �޿�����
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
// �׷��� one�� �Ǻ���ġ ������ŭ ȣ�� �ǰ� zero�� fibo -1��ŭ ȣ��ȴ�.
// 0�϶��� Ư�����̽��� ���� ȣ�� �ϸ� �ȴ�.




#include <bits/stdc++.h>
using namespace std;
int fibo[42]; // Input Range 40
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 42; i++) // 
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int input;
		cin >> input;
		if (input == 0)
		{
			cout << fibo[1] << " " << fibo[0] << '\n';
			continue;
		}
		else
		{
			cout << fibo[input - 1] << " " << fibo[input] << '\n';
			continue;
		}
	}


	return 0;
}