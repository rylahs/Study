#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int arr[2] = { 0, };
	while (n--)
	{
		int a;
		cin >> a;
		arr[a]++;
	}

	int maxValue = max(arr[0], arr[1]);

	if (maxValue == arr[0])
		cout << "Junhee is not cute!";
	else
		cout << "Junhee is cute!";

	return 0;
}