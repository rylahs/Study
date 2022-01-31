// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2309. 일곱 난쟁이
// https://www.acmicpc.net/problem/2309
// https://www.acmicpc.net/source/38336591

// Idea
// 9개의 배열중 7개의 배열의 합을 구해야하므로
// N의 값이 9로 정해져있으므로 3중 for문을 구해도 시간 복잡도는 만족 할 수 있다.
// 1st loop에 선택된 i의 idx를 배제
// 2st loop에 선택된 j의 idx를 배제
// 3rd loop에 선택된 k의 원소 7개를 ans Vector에 삽입
// 합이 100이면 break;
// 일곱난쟁이를 못찾는 경우는 없기에 무조건 답이 발생하는 문제이다.
// ans Vector를 sorting
// 출력

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