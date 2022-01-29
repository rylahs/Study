// BOJ 1110. ���ϱ� ����Ŭ
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
		// ���� ��� �������� ������ �� 10�� �ʰ��� �� �ִ�. �ٽ� 10�� �������� �ʿ��ϴ�.
		backup = (backup % 10 * 10) + ((backup / 10 + backup % 10) % 10); 
		if (origin == backup)
			break;
	}

	cout << count << '\n';
	return 0;
}