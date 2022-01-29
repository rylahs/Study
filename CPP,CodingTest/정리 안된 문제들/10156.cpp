#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int snack, price, money;
	cin >> snack >> price >> money;
	int result;
	if (snack * price < money)
		result = 0;
	else
		result = snack * price - money;
	

	cout << result << "\n";
	return 0;
}