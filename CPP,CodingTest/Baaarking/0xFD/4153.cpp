#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			break;

		int pX = pow(x, 2);
		int pY = pow(y, 2);
		int pZ = pow(z, 2);

		if ((pX + pY == pZ) || (pX + pZ == pY) || (pY + pZ == pX))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;

	}

	return 0;
}