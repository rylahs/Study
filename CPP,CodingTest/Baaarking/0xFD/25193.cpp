#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int N;
	cin >> N;

	string str;
	cin >> str;

	int chick = 0, other = 0;
	for (auto& e : str)
	{
		if (e == 'C')
			chick++;
		else
			other++;
	}

	int res = chick / (other + 1);
	if (chick % (other + 1) != 0)
		res++;
	cout << res << "\n";


	return 0;
}