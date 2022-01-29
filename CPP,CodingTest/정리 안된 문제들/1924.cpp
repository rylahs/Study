// BOJ 1924. 2007³â
// https://www.acmicpc.net/problem/1924

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int month, date;
	cin >> month >> date;
	string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int count_date = 0;
	int temp_month = month - 1;
	while (temp_month > 0)
	{
		switch (temp_month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			count_date += 31;
			temp_month--;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			count_date += 30;
			temp_month--;
			break;
		case 2:
			count_date += 28;
			temp_month--;
			break;
		}
	}
	count_date += date;

	cout << day[count_date % 7] << '\n';
	return 0;
}