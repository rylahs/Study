#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	int g = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		g = gcd(g, v[i]); // 세 수의 최대 공약수로 범위를 줄임
	}

	vector<int> ans;
	for (int i = 1; i * i <= g; i++)
	{
		if (g % i == 0) {
			ans.emplace_back(i);

			if (i * i != g)
				ans.emplace_back(g / i);
		}
	}
	
	sort(ans.begin(), ans.end(), less<>());

	for (auto e : ans)
		cout << e << "\n";
	return 0;
}