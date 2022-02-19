// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 18870. 좌표 압축
// https://www.acmicpc.net/problem/18870
// https://www.acmicpc.net/source/39051955

#include <bits/stdc++.h>
using namespace std;

int x[1000005];
vector<int> uni;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		uni.emplace_back(x[i]);
	}

	sort(uni.begin(), uni.end());

	uni.erase(unique(uni.begin(), uni.end()), uni.end());

	for (int i = 0; i < n; i++)
		cout << lower_bound(uni.begin(), uni.end(), x[i]) - uni.begin() << " ";


	return 0;
}
