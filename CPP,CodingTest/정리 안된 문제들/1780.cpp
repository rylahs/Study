#include <bits/stdc++.h>
using namespace std;

int paper[2200][2200];
int paperCnt[3];
int n;
bool check(int x, int y, int n)
{
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
			if (paper[x][y] != paper[i][j])
				return false;
	return true;
}
void solve(int x, int y, int z)
{
	if (check(x, y, z)) {
		paperCnt[paper[x][y] + 1] += 1;
		return;
	}
	int a = z / 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			solve(x + i * a, y + j * a, a);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> paper[i][j];
	solve(0, 0, n);
	for (int i = 0; i < 3; i++)
		cout << paperCnt[i] << '\n';
	return 0;
}