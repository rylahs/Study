// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15654. N과 M(5)
// https://www.acmicpc.net/problem/15654
// https://www.acmicpc.net/source/38887569

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int isused[10];
int input[10];
int cnt;
void func(int k)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << input[arr[i]] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!isused[i])
		{
			arr[k] = i;
			isused[i] = true;
			func(k + 1);
			isused[i] = false;
		}
	}

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
		cin >> input[i];
	sort(input, input + n);

	func(0);
	
	return 0;
}