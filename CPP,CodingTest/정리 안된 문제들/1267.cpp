#include <bits/stdc++.h>
using namespace std;

int main_1267(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int input;
	int aPrice = 0, bPrice = 0;
	for (int i = 0; i < N; i++) {
		cin >> input;
		aPrice += (input / 30 + 1) * 10;
		bPrice += (input / 60 + 1) * 15;
	}
	

	if (aPrice < bPrice)
		cout << "Y " << aPrice;
	else if (aPrice > bPrice)
		cout << "M " << bPrice;
	else
		cout << "Y M " << aPrice;



	return 0;
}