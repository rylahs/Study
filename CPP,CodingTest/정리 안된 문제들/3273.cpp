// BOJ 3273. 두수의 합
// https://www.acmicpc.net/problem/3273
#include <bits/stdc++.h>
using namespace std;
int a[1000001];
bool pin[2000001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int target;
	cin >> target;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (target - a[i] > 0 && pin[target - a[i]] == true)
			count++;
		else
			pin[a[i]] = true;
	}
	cout << count;
	return 0;
}