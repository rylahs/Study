// BOJ 4344. 평균은 넘겠지
// https://www.acmicpc.net/problem/4344
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int stdNum;
		cin >> stdNum;
		vector<int> v;
		for (int i = 0; i < stdNum; i++)
		{
			int a;
			cin >> a;
			v.emplace_back(a);
		}

		double avg = accumulate(v.begin(), v.end(), 0) / stdNum;
		double count = 0;
		for (auto e : v)
		{
			if (e > avg)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (count * 100 / stdNum) << "%\n";
	}



	return 0;
}