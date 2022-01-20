// BOJ 10807. 개수 세기
// Written Date : 22.01.20
// Writer : Rylah
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(201, 0);
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		v[a + 100]++;
	}
	int findNum;
	cin >> findNum;
	cout << v[findNum + 100];
	return 0;
}