// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 10093. 숫자
// https://www.acmicpc.net/problem/10093
// https://www.acmicpc.net/source/38336708


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;
	long long minV = min(a, b);
	long long maxV = max(a, b);
	if (a == b)
		cout << 0 << "\n";
	else {
		cout << maxV - minV - 1 << "\n";

		for (long long i = minV + 1; i < maxV; i++)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}