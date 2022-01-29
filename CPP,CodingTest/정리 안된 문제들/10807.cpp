#include <bits/stdc++.h>
using namespace std;

int main_10807(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(201, 0);
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v[input + 100]++;
	}
	int target;
	cin >> target;

	cout << v[target + 100];

	return 0;
}