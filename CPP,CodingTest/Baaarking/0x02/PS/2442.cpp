// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2442. 별찍기 - 5
// https://www.acmicpc.net/problem/2442
// https://www.acmicpc.net/source/38339038

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}