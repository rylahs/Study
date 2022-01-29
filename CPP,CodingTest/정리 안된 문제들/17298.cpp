// BOJ 17298. ��ū��
// https://www.acmicpc.net/problem/17298
#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int answer[1000001];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) // Insert
        cin >> a[i]; 
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) // ���������� �����ʿ������� ������ ����ִ´�.
    {
        while (!s.empty() && s.top() <= a[i]) // ���� ������ top���� ���� ũ�ٸ� ��� ����
            s.pop();
        if (s.empty()) // ������ ����ִٸ� -1;
            answer[i] = -1;
        else // ������ ������� ������ ���� ���� ��ū��
            answer[i] = s.top();
        s.push(a[i]);
    }
    for (int i = 0; i < n; i++)
        cout << answer[i] << " ";


	return 0;
}