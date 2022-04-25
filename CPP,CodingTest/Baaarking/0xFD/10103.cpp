#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Ch = 100, Sa = 100;

	int n;
	cin >> n;
	while (n--)
	{
		int chDice, saDice;
		cin >> chDice >> saDice;

		if (chDice == saDice)
			continue;

		else if (chDice > saDice)
			Sa -= chDice;
		else
			Ch -= saDice;

	}

	cout << Ch << "\n" << Sa << "\n";


	return 0;
}