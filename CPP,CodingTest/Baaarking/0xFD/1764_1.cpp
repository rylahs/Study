#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;
	unordered_set<string> ust;
	set<string> duplicate;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		ust.emplace(input);
	}

	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;
		if (ust.find(input) != ust.end())
			duplicate.emplace(input);
	}
	
	cout << duplicate.size() << "\n";
	for (auto& e : duplicate)
		cout << e << "\n";
	
	return 0;
}