#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
int n, m;
void func(int k)
{
	if (k == m) // k�� m���� ��� ����ٸ�
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	int start = 1; // ��������, k = 0�� ������ st = 1
	if (k != 0) 
		start = arr[k - 1] + 1; // k != 0�� ��� st = arr[k-1]+1
	for (int i = start; i <= n; i++)
	{
		if (!isused[i]) // ���� ������ �ʾ�����
		{
			arr[k] = i; // k��° ���� i�� ����
			isused[i] = 1; // ����ߴٰ� ǥ��
			func(k + 1); // �������� ���Ϸ� ��
			isused[i] = 0; // ��� Ȯ�������� ������ �ʾҴٰ� �����
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	func(0);

	return 0;
}