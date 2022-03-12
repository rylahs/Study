// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 15652. N°ú M (4) 
// 

#include <bits/stdc++.h>
using namespace std;

int arr[10];
int n, m;

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	int start = 1;

	if (k != 0)
		start = arr[k - 1];

	for (int i = start; i <= n; i++)
	{
		arr[k] = i;
		func(k + 1);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	func(0);

	return 0;
}