// 0x03. 배열
// Written by : Rylah
// Date : 2022.01.30
// 2577. 숫자의 개수
// https://www.acmicpc.net/problem/2577
// https://www.acmicpc.net/source/38360489

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	
	int d = a * b * c;
	int arr[10] = { 0, };
	while (d > 0) {
		arr[d % 10]++;
		d /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";

	return 0;
}