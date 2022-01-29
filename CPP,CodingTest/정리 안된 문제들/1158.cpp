// BOJ 1158. �似Ǫ�� ����
// https://www.acmicpc.net/problem/1158

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	queue<int> q;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty())
			cout << ", ";
	}
	cout << ">";
	return 0;
}
//
//int N, K, len = 0;
//
//// ����Ʈ���� ���� ���/���� ��带 ����Ű�� ����
//int pre[5001];
//int nxt[5001];
//// �似Ǫ�� ������ �����ϴ� ����
//vector<int> v;
//
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> N >> K;
//
//    // ���� ���� ����Ʈ ����
//    // �� ó�� ���� ������ ��尡 ���θ� ����Ű���� ����
//    for (int i = 1; i <= N; ++i) {
//        pre[i] = (i == 1) ? N : i - 1;
//        nxt[i] = (i == N) ? 1 : i + 1;
//        ++len;
//    }
//
//    int i = 1;
//    // ���� ����Ʈ�� ��ȸ�ϸ� ���� ����
//    for (int cur = 1; len != 0; cur = nxt[cur]) {
//        // K ��°�� �� ����
//        if (i == K) {
//            pre[nxt[cur]] = pre[cur];
//            nxt[pre[cur]] = nxt[cur];
//            v.push_back(cur);
//            i = 1;
//            --len;
//        }
//        else ++i;
//    }
//
//    // �似Ǫ�� ���� ���
//    cout << "<";
//    for (size_t i = 0; i < v.size(); ++i) {
//        cout << v[i];
//        if (i != v.size() - 1) cout << ", ";
//    }
//    cout << ">";
//}