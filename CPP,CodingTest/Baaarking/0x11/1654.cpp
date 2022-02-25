// 0x11. ±×¸®µğ 
// Written by : Rylah
// Date : 2022.02.24
// 1654. ëœì„  ìë¥´ê¸°
// https://www.acmicpc.net/problem/1654

#include <bits/stdc++.h>
using namespace std;

int k, n;
int arr[10005];

bool solve(long long x)
{
	long long cur = 0;
	for (int i = 0; i < k; i++)
		cur += arr[i] / x;
	
	return cur >= n;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	cin >> k >> n;
	
	for (int i = 0; i < k; i++)
		cin >> arr[i];

	sort(arr, arr + k);

	long long start = 1;
	long long end = 0x7fffffff;
	while (start < end) {
		long long mid = (start + end + 1) / 2;

		if (solve(mid))
			start = mid;
		else
			end = mid - 1;
	}

	cout << start << "\n";

	return 0;
}
