// 0xFD. Practice
// Written by : Rylah
// Date : 2022.03.11
// 17478. ����Լ��� ������? 
// https://www.acmicpc.net/problem/17478

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void func(int n)
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
		func(n - 1);
		for (int i = n; i < cnt; i++) cout << "____";
		cout << "��� �亯�Ͽ���.\n";
	}


}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	cin >> n;
	cnt = n;
	func(n);

	return 0;
}