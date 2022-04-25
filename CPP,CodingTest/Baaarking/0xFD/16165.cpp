#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, string> member;
	map<string, vector<string>> group;

	// Group, Member
	for (int i = 0; i < n; i++)
	{
		string groupName;
		cin >> groupName;

		int groupNum;
		cin >> groupNum;
		vector<string> gMember;
		for (int j = 0; j < groupNum; j++)
		{
			string memberName;
			cin >> memberName;

			gMember.emplace_back(memberName);
			member.insert({ memberName, groupName });
		}
		sort(gMember.begin(), gMember.end());
		group.insert({ groupName, gMember });
	}

	for (int i = 0; i < m; i++)
	{
		string quizStr;
		cin >> quizStr;
		int quizNum;
		cin >> quizNum;
		if (quizNum == 0)
		{
			for (auto iter = group[quizStr].begin(); iter != group[quizStr].end(); ++iter)
			{
				cout << *iter << "\n";
			}
		}
		else if (quizNum == 1)
		{
			cout << member[quizStr] << "\n";
		}


	}
	
	return 0;
}