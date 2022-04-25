#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int people = 0;
	int result = -110000;
	for (int i = 0; i < 10; i++)
	{
		int minus, plus;
		cin >> minus >> plus;
		people -= minus;
		people += plus;
		result = max(result, people);
	}

	cout << result << "\n";


	return 0;
}