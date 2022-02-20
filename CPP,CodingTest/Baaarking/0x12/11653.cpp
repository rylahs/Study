// 0x12. Math
// Written by : Rylah
// Date : 2022.02.14
// 11653. 소인수분해
// https://www.acmicpc.net/problem/11653
// https://www.acmicpc.net/source/39034685


#include <bits/stdc++.h>
using namespace std;

vector<int> func(int n)
{
	vector<int> v;

	int i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			v.emplace_back(i);
			n /= i;
			continue;
		}

		i++;
	}

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