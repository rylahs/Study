#include <bits/stdc++.h>
using namespace std;

const int MOD = 1234567891;
const int MULT = 31;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int L;
	cin >> L;

	string s;
	cin >> s;

	long long sum = 0;
	long long R = 1;

	for (int i = 0; i < s.length(); i++)
	{
		sum = (sum + (s[i] - 'a' + 1) * R) % MOD;

		R = (R * MULT) % MOD;
	}

	cout << sum << "\n";


}