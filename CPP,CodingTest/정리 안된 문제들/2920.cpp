#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;
	for (int i = 0; i < 8; i++)
	{
		int a;
		cin >> a;
		v.emplace_back(a);
	}

	int k = 0;
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i + 1] > v[i])
			k++;
		else
			k--;
	}
	if (k == 7)
		cout << "ascending" << "\n";
	else if (k == -7)
		cout << "descending" << "\n";
	else
		cout << "mixed" << "\n";

	return 0;
}