// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 11653. 소인수분해
// https://www.acmicpc.net/problem/11653
// https://www.acmicpc.net/source/39034956


#include <bits/stdc++.h>
using namespace std;

vector<int> func(int n)
{
	vector<int> v;

	
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			v.emplace_back(i);
			n /= i;
		}
	}
	if (n != 1)
		v.emplace_back(n);
	return v;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> ans = func(n);

	for (auto& e : ans)
		cout << e << "\n";
	return 0;
}