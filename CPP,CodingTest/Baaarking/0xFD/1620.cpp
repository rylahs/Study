#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_map<string, int> pokemonName;
	unordered_map<int, string> pokemonNum;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		pokemonName.emplace(input, (i + 1));
		pokemonNum.emplace((i + 1), input);
	}

	for (int i = 0; i < m; i++)
	{
		string search;
		cin >> search;
		if (search[0] >= 'A' && search[0] <= 'Z')
		{
			// Use pokemonName
			cout << pokemonName.find(search)->second << "\n";
			continue;

		}
		else // number
		{
			int iSearch = stoi(search);

			cout << pokemonNum.find(iSearch)->second << "\n";
			continue;
		}
	}





	return 0;
}