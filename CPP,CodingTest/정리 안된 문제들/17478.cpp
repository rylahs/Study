#include <bits/stdc++.h>
using namespace std; 
int cnt = 0;

void print(int n)
{
	if (n == 0)
	{
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� ������?\"\n";
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "��� �亯�Ͽ���.\n";
		return;
	}
	if (n >= 0 && n <= 50) {
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� ������?\"\n";
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		print(n - 1);
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "��� �亯�Ͽ���.\n";
	}
	
}
int main_17478(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cnt = n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	print(n);

	return 0;
}