// BOJ 1110. 더하기 사이클
// https://www.acmicpc.net/problem/1110

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int count = 0;
	int origin;
	cin >> origin;
	int backup = origin;
	
	while (1)
	{
		count++;
		// 나눈 몫과 나머지를 더했을 때 10이 초과할 수 있다. 다시 10의 나머지가 필요하다.
		backup = (backup % 10 * 10) + ((backup / 10 + backup % 10) % 10); 
		if (origin == backup)
			break;
	}

	cout << count << '\n';
	return 0;
}