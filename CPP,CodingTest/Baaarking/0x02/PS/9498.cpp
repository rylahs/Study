// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 9498. 시험 성적
// https://www.acmicpc.net/problem/9498
// https://www.acmicpc.net/source/38335584

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int score;
	cin >> score;
	if (score >= 90)
		cout << "A" << "\n";
	else if (score >= 80 && score < 90)
		cout << "B" << "\n";
	else if (score >= 70 && score < 80)
		cout << "C" << "\n";
	else if (score >= 60 && score < 70)
		cout << "D" << "\n";
	else
		cout << "F" << "\n";

	return 0;
}