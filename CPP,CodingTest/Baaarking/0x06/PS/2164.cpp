// 0x06. Å¥
// Written by : Rylah
// Date : 2022.02.02
// 2164. Ä«µå2
// https://www.acmicpc.net/problem/2164
// https://www.acmicpc.net/source/38477965
#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	queue<int> Q;
	for (int i = 1; i <= n; i++)
		Q.push(i);

	while (Q.size() != 1)
	{
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	cout << Q.front() << "\n";
	return 0;
}