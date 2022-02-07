// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 1267. 핸드폰 요금
// https://www.acmicpc.net/problem/1267
// https://www.acmicpc.net/source/38338125


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<int> v;
	int YPrice = 0, MPrice = 0;
	while (N--)
	{
		int input;
		cin >> input;
		YPrice += (input / 30) * 10 + 10;
		MPrice += (input / 60) * 15 + 15;
	}

	if (YPrice == MPrice)
		cout << "Y M " << YPrice;
	else if (YPrice < MPrice)
		cout << "Y " << YPrice;
	else
		cout << "M " << MPrice;

	return 0;
}