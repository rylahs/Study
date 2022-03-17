#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(3);
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];
	int sub = 0;
	int maxV = *max_element(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		sub += maxV - v[i];

	cout << sub << "\n";

	return 0;
}