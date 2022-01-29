#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		if (a < 40)
			a = 40;
		v.emplace_back(a);
	}
	int avg = accumulate(v.begin(), v.end(), 0) / 5;
	cout << avg << "\n";
	return 0;
}