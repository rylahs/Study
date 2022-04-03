// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 10871. X보다 작은 수
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

	for (int i = 0; i < N; i++) // 시간 복잡도 O(N)
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