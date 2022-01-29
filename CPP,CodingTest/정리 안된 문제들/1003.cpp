#include <bits/stdc++.h>
using namespace std;
int n_zero[41], n_one[41];



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	n_zero[0] = 1;
	n_zero[1] = 0;
	n_one[0] = 0;
	n_one[1] = 1;

	for (int i = 2; i < 41; i++)
	{
		n_zero[i] = n_zero[i - 1] + n_zero[i - 2];
		n_one[i] = n_one[i - 1] + n_one[i - 2];
	}

	int testCase;
	cin >> testCase;


	while (testCase--)
	{
		int a;
		cin >> a;
		cout << n_zero[a] << " " << n_one[a] << '\n';
	}

	return 0;
}