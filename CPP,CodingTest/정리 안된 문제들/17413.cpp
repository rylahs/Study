#include <bits/stdc++.h>
using namespace std;

int main_17413(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	getline(cin, s);
	auto idxc = s.begin();
	auto idxs = s.begin();
	while (idxc != s.end())
	{
		if (*idxc == '<')
		{
			reverse(idxs, idxc);
			while (*idxc != '>')
				idxc++;
			idxc++;
			idxs = idxc;
		}
		else if (*idxc != ' ')
		{
			idxc++;
			continue;
		}

		else if (*idxc == ' ')
		{
			reverse(idxs, idxc);
			idxc++;
			idxs = idxc;
			continue;
		}
	}
	reverse(idxs, idxc);
	cout << s << '\n';
	return 0;
}