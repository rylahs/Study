#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int fibo[46];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 46; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	int a;
	cin >> a;
	cout << fibo[a];
	return 0;
}