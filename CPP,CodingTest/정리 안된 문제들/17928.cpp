#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int ans[1000001];
int main_17928(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> v(n);
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++) {
        if (s.empty()) { //�ʱ� ��
            s.push(i);
        }
        while (!s.empty() && a[s.top()] < a[i]) { //��ū�� �߰� ��
            v[s.top()] = a[i];
            s.pop(); //¦�� ã�����Ƿ� pop
        }
        s.push(i); //���� idx�� push
    }
    while (!s.empty()) { //¦�� ã�� ���� ���̵�
        v[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    return 0;
}
