#include <bits/stdc++.h>
using namespace std;

bool compare(const string &a, string &b)
{
	int sumA = 0, sumB = 0;
	if (a.size() != b.size())
		return a.size() < b.size();
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			sumA += a[i] - '0';
		if (b[i] >= '0' && b[i] <= '9')
			sumB += b[i] - '0';
	}
	if (sumA != sumB)
		return sumA < sumB;

	return a < b;

	
}

int main_1431(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		v.emplace_back(input);
	}
	sort(v.begin(), v.end(), compare);
	for (auto e : v)
		cout << e << '\n';
	return 0;
}