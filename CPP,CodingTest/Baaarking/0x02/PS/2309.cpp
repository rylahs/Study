// BOJ 2309. �ϰ� ������
// https://www.acmicpc.net/problem/2309

// Idea
// 9���� �迭�� 7���� �迭�� ���� ���ؾ��ϹǷ�
// N�� ���� 9�� �����������Ƿ� 3�� for���� ���ص� �ð� ���⵵�� ���� �� �� �ִ�.
// 1st loop�� ���õ� i�� idx�� ����
// 2st loop�� ���õ� j�� idx�� ����
// 3rd loop�� ���õ� k�� ���� 7���� ResultVec�� ����
// ���� 100�̸� break;
// �ϰ������̸� ��ã�� ���� ���⿡ ������ ���� �߻��ϴ� �����̴�.
// resultVec�� sorting
// ���

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
