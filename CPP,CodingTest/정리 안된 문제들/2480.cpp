#include <bits/stdc++.h>
using namespace std;
int main_2480(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int inputDiceA, inputDiceB, inputDiceC;
	cin >> inputDiceA >> inputDiceB >> inputDiceC;
	
	if (inputDiceA == inputDiceB && inputDiceB == inputDiceC)
		cout << (10000 + inputDiceA * 1000);

	else if ((inputDiceA == inputDiceB) || (inputDiceA == inputDiceC))
		cout << (1000 + inputDiceA * 100);
	
	else if (inputDiceB == inputDiceC)
		cout << (1000 + inputDiceB* 100);
	
	else
		cout << std::max({ inputDiceA, inputDiceB, inputDiceC }) * 100;
	
	return 0;
}