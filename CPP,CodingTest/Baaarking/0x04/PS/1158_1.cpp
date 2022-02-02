// 0x04. 연결 리스트
// Written by : Rylah
// Date : 2022.02.02
// 1158. 요세푸스 문제
// https://www.acmicpc.net/problem/1158
// https://www.acmicpc.net/source/38458221
#include <bits/stdc++.h>
using namespace std;

// 리스트에서 이전 노드/ 다음 노드를 가리키는 변수
int pre[5001];
int nxt[5001];

// 요세푸스 순열을 저장하는 벡터
vector<int> v;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int length = 0;
	vector<int> v;
	// 원형 연결리스트 생성
	// 맨 처음 노드와 마지막 노드가 서로를 가리키도록 지정하기
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			pre[i] = n;
		else
			pre[i] = i - 1;

		if (i == n)
			nxt[i] = 1;
		else
			nxt[i] = i + 1;
		length++;
	}

	int idx = 1;
	// 연결리스트를 순회하며 순열을 생성

	for (int cur = 1; length != 0; cur = nxt[cur])
	{
		if (idx == k)
		{
			pre[nxt[cur]] = pre[cur];
			nxt[pre[cur]] = nxt[cur];
			v.emplace_back(cur);
			idx = 1;
			length--;
		}
		else
			idx++;
	}

	// 요세푸스 순열 출력
	cout << "<";
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i != v.size() - 1)
			cout << ", ";
	}
	cout << ">";



	return 0;
}