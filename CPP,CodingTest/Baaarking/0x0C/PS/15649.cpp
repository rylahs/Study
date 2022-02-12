// 0x0C. 백트래킹(Backtracking)
// Written by : Rylah
// Date : 2022.02.10
// 15649. N과 M(1)
// https://www.acmicpc.net/problem/15649
// https://www.acmicpc.net/source/38884797

#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
int n, m;

void func(int k)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!isused[i]) // 방문하지 않았다면
		{
			arr[k] = i; // arr에 입력
			isused[i] = true; // 방문을 표시
			func(k + 1); // 다음 항을 들어감
			isused[i] = false; // 방문이 끝나면 방문했던 것을 해제
		}
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