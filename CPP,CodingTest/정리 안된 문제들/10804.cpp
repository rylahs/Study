#include <bits/stdc++.h>
using namespace std;

vector<int> v1(21, 0);

void reverse(int a, int b) {
	for (int i = 0; i < (b - a + 1) / 2; i++) {
		swap(v1[a + i], v1[b - i]);
	}
}

int main_10804(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 0; i < v1.size(); i++)
		v1[i] = i;
	int inputA, inputB;
	for (int i = 0; i < 10; i++) {
		cin >> inputA >> inputB;
		reverse(inputA, inputB);
	}

	for (int i = 1; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << '\n';

	return 0;
}