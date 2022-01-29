#include <bits/stdc++.h>
using namespace std;

int main_3009(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int px1, px2, px3, py1, py2, py3;
	cin >> px1 >> py1 >> px2 >> py2 >> px3 >> py3;
	int px4, py4;

	if (px1 == px2)
		px4 = px3;
	else if (px1 == px3)
		px4 = px2;
	else
		px4 = px1;
	if (py1 == py2)
		py4 = py3;
	else if (py1 == py3)
		py4 = py2;
	else
		py4 = py1;

	cout << px4 << " " << py4;
	return 0;
}