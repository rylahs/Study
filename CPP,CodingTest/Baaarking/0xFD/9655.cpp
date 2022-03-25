#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	if (n % 2 == 1)
		cout << "SK" << "\n";
	else
		cout << "CY" << "\n";
	return 0;
}