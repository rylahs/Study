#include <bits/stdc++.h>
using namespace std;

int main_1977(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	for (int i = 1; i < 101; i++)
	{
		int a = i * i;
		v.emplace_back(a);
	}
	
	int a, b;
	cin >> a >> b;
	
	int sum = 0;
	for (int i = (int)sqrt(a); i < (int)sqrt(b); i++)
		sum += v[i];
	if (sum == 0)
	{
		sum = -1;
		cout << sum << '\n';
	}
	else
	{
		cout << sum << '\n';
		cout << v[(int)sqrt(a)];
	}
	

	return 0;
}