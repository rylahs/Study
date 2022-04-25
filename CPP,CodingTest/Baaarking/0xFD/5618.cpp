#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	int minVal = *min_element(v.begin(), v.end());

	for (int i = 1; i <= minVal; i++)
	{
		bool isDivisor = true;
		for (int j = 0; j < n; j++)
		{
			if (v[j] % i != 0)
			{
				isDivisor = false;
				break;
			}
		}

		if (isDivisor == true)
		{
			cout << i << "\n";
		}

		else
			continue;
	}

	return 0;
}