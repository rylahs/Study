#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	unordered_map<string, bool> ump;
	int helloCnt = 0;
	while (N--)
	{
		string input;
		cin >> input;
		
		if (input == "ENTER")
		{
			for (auto& e : ump)
			{
				if (e.second == true)
					helloCnt++;
			}

			ump.clear();
		}
		else
		{
			ump[input] = true;
		}
	}
	for (auto& e : ump)
	{
		if (e.second == true)
			helloCnt++;
	}
	cout << helloCnt << "\n";


	return 0;
}