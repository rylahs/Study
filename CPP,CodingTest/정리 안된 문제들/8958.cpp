// BOJ 8958. OX ДыБо
// https://www.acmicpc.net/problem/8958

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
		string str;
		cin >> str;
		int sum = 0;
		int currentScore = 1;
		for (auto& e : str)
		{
			if (e == 'O')
			{
				sum += currentScore;
				currentScore++;
			}
			else
				currentScore = 1;
		}

		cout << sum << '\n';
	}
	return 0;
}