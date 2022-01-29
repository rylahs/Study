// BOJ 17298. 오큰수
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

    for (int i = n - 1; i >= 0; i--) // 역방향으로 오른쪽에서부터 스택을 집어넣는다.
    {
        while (!s.empty() && s.top() <= a[i]) // 현재 스택의 top보다 값이 크다면 모두 꺼냄
            s.pop();
        if (s.empty()) // 스택이 비어있다면 -1;
            answer[i] = -1;
        else // 스택이 비어있지 않으면 제일 위가 오큰수
            answer[i] = s.top();
        s.push(a[i]);
    }
    for (int i = 0; i < n; i++)
        cout << answer[i] << " ";


	return 0;
}