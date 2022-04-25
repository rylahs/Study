#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int minkuk[4];
	int mansae[4];
	for (int i = 0; i < 4; i++)
		cin >> minkuk[i];
	for (int i = 0; i < 4; i++)
		cin >> mansae[i];

	int minkukSum = 0, mansaeSum = 0;
	minkukSum = accumulate(minkuk, minkuk + 4, 0);
	mansaeSum = accumulate(mansae, mansae + 4, 0);

	if (minkukSum >= mansaeSum)
		cout << minkukSum << "\n";
	else
		cout << mansaeSum << "\n";
	return 0;

}