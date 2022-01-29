// BOJ 1330. 두 수 비교하기
// https://www.acmicpc.net/problem/1330

#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << '>';
	else if (a < b)
		cout << '<';
	else
		cout << "==";
	return 0;
}