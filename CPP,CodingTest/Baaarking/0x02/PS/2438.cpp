// 0x02. ���� �ڵ� �ۼ� ���
// Written by : Rylah
// Date : 2022.01.30
// 2438. ����� - 1
// https://www.acmicpc.net/problem/2438
// https://www.acmicpc.net/source/38338624

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
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}