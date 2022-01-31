// 0x02. 기초 코드 작성 요령
// Written by : Rylah
// Date : 2022.01.30
// 2480. 주사위 세개
// https://www.acmicpc.net/problem/2480
// https://www.acmicpc.net/source/38335960

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int diceA, diceB, diceC;
	cin >> diceA >> diceB >> diceC;

	int maxV = max(diceA, diceB);
	maxV = max(maxV, diceC);
	
	int money = 0;
	
	if ((diceA == diceB) && (diceB == diceC))
		money = 10000 + (diceA * 1000);
	else if ((diceA == diceB) || (diceA == diceC))
		money = 1000 + (diceA * 100);
	else if (diceB == diceC)
		money = 1000 + (diceB * 100);
	else
		money = maxV * 100;

	cout << money << "\n";
	return 0;
}