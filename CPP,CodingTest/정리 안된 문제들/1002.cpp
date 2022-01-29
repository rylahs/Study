// BOJ 1002
// �ͷ�
// https://www.acmicpc.net/problem/1002

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<tuple<int, int, int>> v; // #inclue <tuple> �� �����ϱ� ���� �ڵ�
									// �������� ������ ���� �����ϴ� ���� ���� Ǯ�� �� ����.

	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		v.clear();
		for (int i = 0; i < 2; i++)
		{
			int x, y, r;
			cin >> x >> y >> r;
			v.push_back({ x, y, r });
		}
		int x1 = get<0>(v[0]), y1 = get<1>(v[0]), r1 = get<2>(v[0]);
		int x2 = get<0>(v[1]), y2 = get<1>(v[1]), r2 = get<2>(v[1]);

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2) // ������ ���� ��ġ�ϰ� �Ÿ��� ������ �ߺ��� ��ӵǹǷ� ���Ѵ�
				cout << -1;
			else // ��ǥ�� ������ �Ÿ��� �ٸ��� ��ġ�ϴ� ��ǥ�� ����
				cout << 0;
		}
		else
		{
			int min = abs(r1 - r2);
			double distancemult = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

			if (distancemult < (r1 + r2) && distancemult > min) // ���� Ȥ�� ���밪
				cout << 2;
			else if (distancemult == r1 + r2 || distancemult == min) // ���� Ȥ�� ���밪�� ��ġ�ϸ� ��ǥ�� 1��
				cout << 1;
			else // �� �ܿ��� 0
				cout << 0;
		}
		cout << '\n';
	}

	return 0;
}