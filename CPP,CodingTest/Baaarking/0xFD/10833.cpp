#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int res = 0;
	while (N--)
	{
		int std, apple;
		cin >> std >> apple;
		res += (apple % std);
	}

	cout << res << "\n";


	return 0;
}