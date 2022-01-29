// BOJ 1712. 손익분기점
// https://www.acmicpc.net/problem/1712

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	cin >> a >> b >> c;
	int count;
	if (b >= c)
		count = -1;
	else
		count = a / (c - b) + 1;
	

	cout << count << '\n';
	return 0;
}
