#include <bits/stdc++.h>
using namespace std;
int arr[10];
int num[10];

int n, m;
void func(int k)
{
	if (k == m) // k�� m���� ��� ����ٸ�
	{
		for (int i = 0; i < m; i++)
			cout << num[arr[i]] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[k] = i; // k��° ���� i�� ����
		func(k + 1); // �������� ���Ϸ� ��
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num, num + n);
	func(0);
	return 0;
}