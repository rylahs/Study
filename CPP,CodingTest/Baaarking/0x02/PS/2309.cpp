// 0x02. ���� �ڵ� �ۼ� ���
// Written by : Rylah
// Date : 2022.01.30
// 2309. �ϰ� ������
// https://www.acmicpc.net/problem/2309
// https://www.acmicpc.net/source/38336591

// Idea
// 9���� �迭�� 7���� �迭�� ���� ���ؾ��ϹǷ�
// N�� ���� 9�� �����������Ƿ� 3�� for���� ���ص� �ð� ���⵵�� ���� �� �� �ִ�.
// 1st loop�� ���õ� i�� idx�� ����
// 2st loop�� ���õ� j�� idx�� ����
// 3rd loop�� ���õ� k�� ���� 7���� ans Vector�� ����
// ���� 100�̸� break;
// �ϰ������̸� ��ã�� ���� ���⿡ ������ ���� �߻��ϴ� �����̴�.
// ans Vector�� sorting
// ���

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	int a;
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		v.emplace_back(a);
	}

	vector<int> z;
	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				continue;
			z.clear();
			for (int k = 0; k < 9; k++)
			{
				if (j == k || i == k)
					continue;
				z.emplace_back(v[k]);
			}
			if (accumulate(z.begin(), z.end(), 0) == 100)
				break;
		}
		if (accumulate(z.begin(), z.end(), 0) == 100)
			break;
	}

	sort(z.begin(), z.end());

	for (auto& e : z)
		cout << e << "\n";


	return 0;
}