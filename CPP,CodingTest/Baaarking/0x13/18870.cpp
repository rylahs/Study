// 0x13. 이분 탐색
// Written by : Rylah
// Date : 2022.02.14
// 18870. 좌표 압축
// https://www.acmicpc.net/problem/18870
// https://www.acmicpc.net/source/39051792

#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
vector<int> v, uni;
int n;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		v.emplace_back(arr[i]);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || v[i - 1] != v[i])
			uni.emplace_back(v[i]);
	}

	for (int i = 0; i < n; i++)
		cout << lower_bound(uni.begin(), uni.end(), arr[i]) - uni.begin() << " ";
	
	return 0;
}
