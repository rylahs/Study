// 0x02. ���� �ڵ� �ۼ� ���
// Written by : Rylah
// Date : 2022.01.30
// 10871. X���� ���� ��
// https://www.acmicpc.net/problem/10871
// https://www.acmicpc.net/source/38335350

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a < x)
			v.emplace_back(a);
	}
	for (auto e : v)
		cout << e << " ";
	cout << "\n";

	return 0;
}