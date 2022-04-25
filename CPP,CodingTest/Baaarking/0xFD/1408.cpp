#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string curTime;
	string missionTime;
	cin >> curTime >> missionTime;

	int curHour = stoi(curTime.substr(0, 2));
	int curMin = stoi(curTime.substr(3, 5));
	int curSec = stoi(curTime.substr(6, 8));

	int missionHour = stoi(missionTime.substr(0, 2));
	int missionMin = stoi(missionTime.substr(3, 5));
	int missionSec = stoi(missionTime.substr(6, 8));

	int limitSec, limitMin, limitHour;
	
	limitSec = missionSec - curSec;
	if (limitSec < 0)
	{
		missionMin--;
		limitSec += 60;
	}
	
	limitMin = missionMin - curMin;
	if (limitMin < 0)
	{
		missionHour--;
		limitMin += 60;
	}

	limitHour = missionHour - curHour;
	if (limitHour < 0)
	{
		limitHour += 24;
	}

	string res = "";
	if (limitHour < 10)
	{
		res += "0";
	}
	res += to_string(limitHour);

	res += ":";
	if (limitMin < 10)
		res += "0";
	res += to_string(limitMin);
	res += ":";
	if (limitSec < 10)
		res += "0";
	res += to_string(limitSec);
	
	cout << res << "\n";

	return 0;
}