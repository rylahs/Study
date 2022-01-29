// BOJ 6198. 옥상 정원 꾸미기
// https://www.acmicpc.net/problem/6198
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<int> s;
	int n;
	cin >> n;
	long long answer = 0;
	while (n--)
	{
		int h;
		cin >> h;
		while (!s.empty() && s.top() <= h)
			s.pop();
		answer += s.size();
		s.push(h);
	}
	cout << answer << '\n';
	return 0;
}