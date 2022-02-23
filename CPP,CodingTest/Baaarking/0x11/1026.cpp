// 0x11. Greedy
// Written by : Rylah
// Date : 2022.02.23
// 1026. 보물
// https://www.acmicpc.net/problem/1026
// https://www.acmicpc.net/source/39491900

#include <bits/stdc++.h>
using namespace std;

int A[52];
int B[52];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n; i++)
		cin >> B[i];

	sort(A, A + n, less<>());
	sort(B, B + n, greater<>());

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += A[i] * B[i];

	cout << sum << "\n";

	
	return 0;
}