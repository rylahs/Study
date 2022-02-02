// 0x04. 연결 리스트
// Written by : Rylah
// Date : 2022.02.02
// 1158. 요세푸스 문제
// https://www.acmicpc.net/problem/1158
// https://www.acmicpc.net/source/38458221

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;

	vector<int> v, ans;
	for (int i = 1; i <= n; i++)
		v.emplace_back(i);

	for (int i = 0; ans.size() < n; i++)
	{
		if (i % k == k - 1)
			ans.emplace_back(v[i]);
		else
			v.push_back(v[i]);
	}

	cout << "<";
	for (int i = 0; i < n; i++) {
		if (i == n - 1)
			cout << ans[i];
		else
			cout << ans[i] << ", ";
	}
	cout << ">";
	return 0;
}