// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.22
// 18883. N M
// 

#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j < m - 1)
				cout << cnt++ << " ";
			else
				cout << cnt++;
		}
			
		cout << "\n";
	}
	return 0;
}