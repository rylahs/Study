// BOJ 1427. ��Ʈ�λ��̵�
// https://www.acmicpc.net/problem/1427

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	cin >> str;

	sort(str.begin(), str.end(), greater<>());

	cout << str << '\n';
	return 0;
}
