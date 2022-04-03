// BaaarkingDog ���� �˰��� �н�
// 0x02. ���� �ڵ� �ۼ� ��� II
// 10871. X���� ���� ��
// Write : Rylah
// Date : 2022. 04. 02

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, X;
	cin >> N >> X;

	vector<int> v;

	for (int i = 0; i < N; i++) // �ð� ���⵵ O(N)
	{
		int tmp;
		cin >> tmp;

		if (tmp >= X)
			continue;
		v.emplace_back(tmp);
	}

	for (auto& e : v)
		cout << e << " ";
	return 0;
}