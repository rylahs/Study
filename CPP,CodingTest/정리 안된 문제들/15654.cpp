#include <bits/stdc++.h>
using namespace std;
int arr[10];
int num[10];
bool isused[10];
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
		if (!isused[i]) {
			arr[k] = i; // k��° ���� i�� ����
			isused[i] = 1; // ����ߴٰ� ǥ��
			func(k + 1); // �������� ���Ϸ� ��
			isused[i] = 0; // �� Ȯ�������� ���� �ǵ���
		}
		
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