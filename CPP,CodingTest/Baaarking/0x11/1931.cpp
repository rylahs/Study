// 0x11. 그리디
// Written by : Rylah
// Date : 2022.02.13
// 1931. 회의실 배정
// https://www.acmicpc.net/problem/1931
// https://www.acmicpc.net/source/38987947

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v(100005);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i].second >> v[i].first;

	sort(v.begin(), v.begin() + n);

	int cnt = 0;
	int time = 0;

	for (int i = 0; i < n; i++)
	{
		if (time > v[i].second)
			continue;
		
		cnt++;
		time = v[i].first;
		
	}

	cout << cnt << "\n";

	return 0;
}
