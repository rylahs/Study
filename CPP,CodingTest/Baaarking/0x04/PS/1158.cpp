// 0x04. 연결 리스트 
// Written by : Rylah
// Date : 2022.02.02
// 1158. 요세푸스 문제 
// https://www.acmicpc.net/problem/1158
// https://www.acmicpc.net/source/38457298
#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;

	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (q.size())
			cout << ", ";
	}
	cout << ">";
	return 0;
}
