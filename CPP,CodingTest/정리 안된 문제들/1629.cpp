#include <bits/stdc++.h>
using namespace std;
long long pow(long long a, long long b, long long c)
{
	if (b == 1)
		return a % c;
	long long result = pow(a, b / 2, c);
	result = result * result % c;
	if (b % 2 == 0)
		return result;
	return result * a % c;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b, c;
	cin >> a >> b >> c;
	cout << pow(a, b, c);
	return 0;
}