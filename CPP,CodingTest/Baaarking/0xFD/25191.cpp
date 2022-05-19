#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int coke, beer;
	cin >> coke >> beer;

	int availChicken = (coke / 2) + beer;

	int res = 0;
	if (N < availChicken)
		res = N;
	else
		res = availChicken;

	cout << res << "\n";

	return 0;
}