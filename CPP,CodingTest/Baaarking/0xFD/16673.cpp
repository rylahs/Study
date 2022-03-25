#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int c, k, p;
	cin >> c >> k >> p;

	// KC + PC^2
	long long kc = k * ((c * (c + 1)) / 2); // n(n+1)/2 * k
	long long pc2 = p * ((c * (c + 1) * ((2 * c + 1)) / 6)); // n^2 Sum : n * (n + 1) * (2n +1) / 6

	long long result = kc + pc2;

	cout << result << "\n";
	return 0;
}