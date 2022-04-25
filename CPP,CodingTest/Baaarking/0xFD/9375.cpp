#include <bits/stdc++.h>
#include <unordered_map>
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
		int ans = 1;
		unordered_map<string, int> mp;
		if (n == 0)
			ans = 0;
		else
		{
			for (int i = 0; i < n; i++)
			{
				string name, type;
				cin >> name >> type;
				auto it = mp.find(type);
				if (it != mp.end())
				{
					it->second += 1;
				}
				else
				{
					mp.emplace(type, 1);
				}

			}
			for (auto it = mp.begin(); it != mp.end(); ++it)
			{
				ans *= (it->second) + 1;
			}

			ans--;
		}
		cout << ans << "\n";

	}



	return 0;
}