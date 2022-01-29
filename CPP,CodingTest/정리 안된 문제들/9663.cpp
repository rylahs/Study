#include <bits/stdc++.h>
using namespace std;

bool isused1[40]; 
bool isused2[40]; //  / �밢��
bool isused3[40]; //  \ �밢��

int cnt, n;

void funcNQueen(int cur) 
{
	if (cur == n) { // ����
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1])
			continue;
		isused1[i] = 1;
		isused2[i + cur] = 1;
		isused3[cur - i + n - 1] = 1;
		funcNQueen(cur + 1);
		isused1[i] = 0;
		isused2[i + cur] = 0;
		isused3[cur - i + n - 1] = 0;
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	funcNQueen(0);
	cout << cnt;

	return 0;
}