#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int fibo[3] = { 0, 1, 1 };

	int n;
	cin >> n;

	if (n <= 2)
		cout << fibo[n] << "\n";

	else
	{
		for (int i = 3; i <= n; i++)
		{
			fibo[0] = fibo[1];
			fibo[1] = fibo[2];
			fibo[2] = fibo[1] + fibo[0];
		}

		cout << fibo[2] << "\n";
	}


	return 0;
}