// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 15651. N°ú M (3) 
// 

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
			arr[k] = i;
			//isused[i] = true;
			func(k + 1);
			//isused[i] = false;
		
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