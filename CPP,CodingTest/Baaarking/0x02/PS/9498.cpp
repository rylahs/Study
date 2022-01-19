// BOJ 9498. 시험성적
// https://www.acmicpc.net/problem/9498
// Written By Rylah
// Date : 2022.01.03

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int score;
	cin >> score;

	if (score <= 100 && score >= 90)
		cout << 'A';
	else if (score < 90 && score >= 80)
		cout << 'B';
	else if (score < 80 && score >= 70)
		cout << 'C';
	else if (score < 70 && score >= 60)
		cout << 'D';
	else
		cout << 'F';

	return 0;
}
