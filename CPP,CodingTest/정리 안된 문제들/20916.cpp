// BOJ 20916. ¾È³ç 2020 ¾È³ç 2021
// https://www.acmicpc.net/problem/20916

// Time Complexity Failed Code

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
		int n;
		cin >> n;
		vector<string> v;
		for (int i = 0; i < n; i++)
		{
			string str;
			cin >> str;
			v.emplace_back(str);
		}
		int count = 0;
		for (int i = 0; i < v.size() - 1; i++)
		{
			for (int j = i + 1; j < v.size(); j++)
			{
				if (i == j)
					continue;
				string tempStr;
				tempStr = to_string(stoi(v[i]) + stoi(v[j]));
				if (tempStr.size() < 4)
					continue;
				string ansFirst, ansSecond;
				ansFirst += tempStr.substr(0, 4);
				ansSecond += tempStr.substr(tempStr.size() - 4);
				if (ansFirst == "2020" && ansSecond == "2021")
					count++;
			}
		}


		cout << count << '\n';
	}
	return 0;
}