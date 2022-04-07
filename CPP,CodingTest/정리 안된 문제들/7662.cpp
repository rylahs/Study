#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	int t; 
	cin >> t;

	while (t--)
	{
		multiset<int> mst;
		int n;
		cin >> n;
		while (n--)
		{
			char cmd;
			
			cin >> cmd;

			if (cmd == 'I')
			{
				int cmdVal;
				cin >> cmdVal;
				mst.insert(cmdVal);
				continue;
			}
			else
			{
				int cmdVal;
				cin >> cmdVal;
				if (mst.empty())
					continue;
				if (cmdVal == 1)
				{

					mst.erase(prev(mst.end()));
				}
				else
				{
					mst.erase(mst.begin());
				}
			}
		}

		if (mst.empty())
			cout << "EMPTY" << "\n";
		else
			cout << *prev(mst.end()) << " " << *mst.begin() << "\n";
	}
	return 0;
}