// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2562. 최댓값 maxElement
// https://www.acmicpc.net/problem/2562
// https://www.acmicpc.net/source/38339942
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[9];
	for (int i = 0; i < 9; i++)
		cin >> a[i];
	cout << *max_element(a, a + 9) << "\n"; // #include <algorithm>
	cout << max_element(a, a + 9) - a + 1 << "\n";
	return 0;
}