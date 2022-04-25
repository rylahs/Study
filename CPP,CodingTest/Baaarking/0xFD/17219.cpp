#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;
	unordered_map<string, string> mp;

	for (int i = 0; i < N; i++)
	{
		string site, pw;
		cin >> site >> pw;
		mp.emplace(site, pw);
	}
	for (int i = 0; i < M; i++)
	{
		string findSite;
		cin >> findSite;

		auto it = mp.find(findSite);
		if (it != mp.end())
			cout << it->second << "\n";

	}


	return 0;
}