#include <bits/stdc++.h>
using namespace std;

int main_2748(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long fibo[3] = { 0, 1, 1 };
	long long n;
	cin >> n;
	if (n <= 2)
		cout << fibo[n];
	else {
		while (n-- != 2)
		{
			fibo[0] = fibo[1];
			fibo[1] = fibo[2];
			fibo[2] = fibo[1] + fibo[0];
		}
		cout << fibo[2] << '\n';
	}

	return 0;
}