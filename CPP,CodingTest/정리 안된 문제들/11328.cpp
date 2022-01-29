#include <bits/stdc++.h>
using namespace std;

int main_11328(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	string a, b;
	for (int t = 0; t < testCase; t++)
	{
		bool result = true;
		cin >> a;
		cin >> b;
		
		stable_sort(a.begin(), a.end());
		stable_sort(b.begin(), b.end());

		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i]) {
				result = false;
				break;
			}
		}

		if (result == true)
			cout << "Possible" << '\n';
		else
			cout << "Impossible" << '\n';
	}


	return 0;
}