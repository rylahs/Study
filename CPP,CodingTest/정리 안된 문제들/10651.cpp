#include <bits/stdc++.h>
using namespace std;
int arr[10];

int n, m;
void func(int k)
{
	if (k == m) // k가 m개를 모두 골랐다면
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		arr[k] = i; // k번째 수를 i로 정함
		func(k + 1); // 다음수를 정하러 들어감
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