// BaaarkingDog 실전 알고리즘 학습
// 0x02. 기초 코드 작성 요령 II
// 2309. 일곱 난쟁이
// Write : Rylah
// Date : 2022. 04. 03

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> input(9);

	for (int i = 0; i < 9; i++)
		cin >> input[i];

	vector<int> ans;

	bool isFind = false;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				continue;
			ans.clear();
			for (int k = 0; k < 9; k++)
			{
				if (i == k || j == k)
					continue;
				ans.emplace_back(input[k]);

				if (accumulate(ans.begin(), ans.end(), 0) == 100 && ans.size() == 7)
					isFind = true;

				if (isFind)
					break;
			}
			if (isFind)
				break;
		}
		if (isFind)
			break;
	}

	sort(ans.begin(), ans.end());

	for (auto& e : ans)
		cout << e << "\n";

	return 0;
}