#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
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
		if (!isused[i]) // 아직 사용되지 않았으면
		{
			arr[k] = i; // k번째 수를 i로 정함
			isused[i] = 1; // 사용했다고 표시
			func(k + 1); // 다음수를 정하러 들어감
			isused[i] = 0; // 모두 확인했으니 사용되지 않았다고 명시함
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