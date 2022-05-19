#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;
	unordered_map<string, int> mp;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		mp[input]++;
	}

	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;
		mp[input]++;
	}
	set<string> duplicate;
	for (auto& e : mp)
	{
		if (e.second > 1)
			duplicate.insert(e.first);
	}

	cout << duplicate.size() << "\n";
	for (auto& e : duplicate)
		cout << e << "\n";

	return 0;
}