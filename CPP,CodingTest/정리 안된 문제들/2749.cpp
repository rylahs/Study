#include <bits/stdc++.h>
using namespace std;
int fibo[1500000];

int main_2749(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	long long n;
	cin >> n;
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 1500000; i++)
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000;

	cout << fibo[n % 1500000];
	return 0;
}