#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> burger(3);
	for (int i = 0; i < 3; i++)
		cin >> burger[i];
	
	vector<int> drink(2);
	for (int i = 0; i < 2; i++)
		cin >> drink[i];

	int setMenuPrice = *min_element(burger.begin(), burger.end()) + *min_element(drink.begin(), drink.end()) - 50;

	cout << setMenuPrice << "\n";




	return 0;

}