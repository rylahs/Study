#include <bits/stdc++.h>
using namespace std;

long long a[93000];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	for (long long i = 0ll; i < 93000; i++) {
		a[i] = ((i * (i + 1)) / 2);
	}

	long long input = 0;
	cin >> input;
	cout << lower_bound(a, a + 93000, input) - a - 1 << "\n";
	

	return 0;
}