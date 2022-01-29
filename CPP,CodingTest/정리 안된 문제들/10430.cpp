// BOJ 10430 나머지
// https://www.acmicpc.net/problem/10430
#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << (((a % c) + (b % c)) % c) << '\n';
	cout << (a * b) % c << '\n';
	cout << (((a % c) * (b % c)) % c) << '\n';
	return 0;
}