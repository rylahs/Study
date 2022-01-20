// BOJ 10807. 개수 세기
// https://www.acmicpc.net/problem/10807
#include <bits/stdc++.h>
using namespace std;

int a[201];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		a[input + 100]++;
	}
	
	int target;
	cin >> target;

	cout << a[target + 100];

	return 0;
}