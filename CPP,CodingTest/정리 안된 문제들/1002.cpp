// BOJ 1002
// 터렛
// https://www.acmicpc.net/problem/1002

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<tuple<int, int, int>> v; // #inclue <tuple> 을 연습하기 위한 코드
									// 직관성만 따지면 변수 선언하는 것이 문제 풀기 더 좋다.

	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		v.clear();
		for (int i = 0; i < 2; i++)
		{
			int x, y, r;
			cin >> x >> y >> r;
			v.push_back({ x, y, r });
		}
		int x1 = get<0>(v[0]), y1 = get<1>(v[0]), r1 = get<2>(v[0]);
		int x2 = get<0>(v[1]), y2 = get<1>(v[1]), r2 = get<2>(v[1]);

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2) // 완전히 점이 일치하고 거리도 같으면 중복이 계속되므로 무한대
				cout << -1;
			else // 좌표는 같은데 거리가 다르면 일치하는 좌표가 없음
				cout << 0;
		}
		else
		{
			int min = abs(r1 - r2);
			double distancemult = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

			if (distancemult < (r1 + r2) && distancemult > min) // 음수 혹은 절대값
				cout << 2;
			else if (distancemult == r1 + r2 || distancemult == min) // 음수 혹은 절대값과 일치하면 좌표는 1개
				cout << 1;
			else // 그 외에는 0
				cout << 0;
		}
		cout << '\n';
	}

	return 0;
}