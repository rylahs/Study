// BOJ 1475. ¹æ¹øÈ£
// https://www.acmicpc.net/problem/1475
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(10, 0);
	int n;
	cin >> n;
	while (n > 0)
	{
		v[n % 10]++;
		n /= 10;
	}

	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (i == 6 || i == 9)
			continue;
		if (v[i] > result)
			result = v[i];
	}
	result = max(((v[6] + v[9]) + 1) / 2, result);
	cout << result;
	return 0;
}