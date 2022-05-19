#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> student(31, 0);
	student[0] = 1;

	for (int i = 0; i < 28; i++)
	{
		int sendReportStdNum;
		cin >> sendReportStdNum;

		student[sendReportStdNum]++;
	}
	int cnt = 0;

	for (int i = 0; i < static_cast<int>(student.size()); i++)
	{
		if (cnt == 2)
			break;

		if (student[i] != 0)
			continue;

		cout << i << "\n";
		cnt++;

	}

	return 0;
}