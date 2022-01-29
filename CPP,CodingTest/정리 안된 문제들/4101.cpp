#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a = 1, b = 1;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		if (a <= b)
			cout << "No\n";
		else
			cout << "Yes\n";
		cin >> a >> b;
	}
	return 0;
}