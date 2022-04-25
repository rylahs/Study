#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int problemNum;
	cin >> problemNum;
	vector<int> proVec(problemNum);

	for (int i = 0; i < static_cast<int>(proVec.size()); i++)
		cin >> proVec[i];

	int score = 0;
	int addScore = 1;
	for (int i = 0; i < static_cast<int>(proVec.size()); i++)
	{
		if (i == 0)
		{
			if (proVec[i] == 1)
			{
				score += addScore;
				addScore++;
			}
			continue;
		}

		if (proVec[i] == 1)
		{
			score += addScore;
			addScore++;
		}
		else
		{
			addScore = 1;
		}
	}

	cout << score << "\n";


	return 0;

}