#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string co = ":";
	string fan = "fan";

	string fan_c = co + fan + co;
	
	string str;
	cin >> str;
	string str_c = co + str + co;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				cout << str_c;
			else
				cout << fan_c;
		}
		cout << "\n";
	}
	return 0;
}