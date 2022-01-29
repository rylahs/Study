#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;
	vector<int> v(10, 0);
	int num;
	for (int i = 1; i <= n; i++)
	{
		num = i;
		while (num != 0)
		{
			if (num / 10 == 0)
				break;
			v[num % 10]++;
			num /= 10;
		}
		v[num % 10]++;
	}

	for (auto e : v)
		cout << e << " ";

	return 0;
}