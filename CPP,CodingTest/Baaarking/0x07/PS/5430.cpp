// 0x07. µ¦
// Written by : Rylah
// Date : 2022.02.03
// 5430. AC
// https://www.acmicpc.net/problem/5430
// https://www.acmicpc.net/source/38484269

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
		deque<int> DQ;
		string cmd;
		cin >> cmd;
		int n;
		cin >> n;
		string arrayStr;
		cin >> arrayStr;

		int number = 0;
		bool isFail = false;
		for (int i = 1; i + 1 < (int)arrayStr.size(); i++)
		{
			if (arrayStr[i] == ',')
			{
				DQ.emplace_back(number);
				number = 0;
			}
			else
			{
				number = 10 * number + (arrayStr[i] - '0');
			}
		}

		if (number != 0)
			DQ.emplace_back(number);

		int rev = 0;
		
		for (int i = 0; i < (int)cmd.size(); i++)
		{
			if (cmd[i] == 'R')
				rev = 1 - rev;
			else
			{
				if (DQ.empty())
				{
					isFail = true;
					break;
				}
				if (rev == 0)
					DQ.pop_front();
				else
					DQ.pop_back();
			}
		}

		if (isFail)
			cout << "error\n";
		else
		{
			if (rev == 1)
				reverse(DQ.begin(), DQ.end());
			
			cout << '[';
			for (int i = 0; i < DQ.size(); i++)
			{
				cout << DQ[i];
				if (i + 1 != DQ.size())
					cout << ",";
			}
			cout << "]\n";
		}

	}

	return 0;
}
