// BOJ 2309. 일곱 난쟁이
// https://www.acmicpc.net/problem/2309

// Idea
// 9개의 배열중 7개의 배열의 합을 구해야하므로
// N의 값이 9로 정해져있으므로 3중 for문을 구해도 시간 복잡도는 만족 할 수 있다.
// 1st loop에 선택된 i의 idx를 배제
// 2st loop에 선택된 j의 idx를 배제
// 3rd loop에 선택된 k의 원소 7개를 ResultVec에 삽입
// 합이 100이면 break;
// 일곱난쟁이를 못찾는 경우는 없기에 무조건 답이 발생하는 문제이다.
// resultVec을 sorting
// 출력

// Written By Rylah
// Date : 2022.01.02


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> inputVec;
	vector<int> resultVec;
	for (int i = 0; i < 9; i++)
	{
		int input;
		cin >> input;
		inputVec.emplace_back(input);
	}

	for (int i = 0; i < inputVec.size(); i++)
	{
		for (int j = 0; j < inputVec.size(); j++)
		{
			resultVec.clear();
			if (i == j)
				continue;
			for (int k = 0; k < inputVec.size(); k++)
			{
				if (i == k || j == k)
					continue;

				resultVec.emplace_back(inputVec[k]);
			}
			if (accumulate(resultVec.begin(), resultVec.end(), 0) == 100)
				break;
		}
		if (accumulate(resultVec.begin(), resultVec.end(), 0) == 100)
			break;
	}
	sort(resultVec.begin(), resultVec.end());
	for (auto e : resultVec)
		cout << e << '\n';

	return 0;
}
