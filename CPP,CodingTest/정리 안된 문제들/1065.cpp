// BOJ 1065. �Ѽ�
// https://www.acmicpc.net/problem/1065
// ���������̶�
// ���� ������ ����
// 1~99������ �� �ڽ��� ���������� �� �� �ۿ� ����.
// 100���� 100�� �ڸ��� 10���ڸ� 10�� �ڸ��� 1�� �ڸ��� ���� ���� ��쿡 ���������̴�.

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i < 100)
            count++;
        else if (i < 1000)
            if ( (i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 100 % 10))
                count++;
    }
    cout << count << '\n';

    return 0;
}