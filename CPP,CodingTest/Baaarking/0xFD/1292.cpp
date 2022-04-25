#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int index = 1;
    for (int i = 1; i <= 1000; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            arr[index] = i;
            if (index > 1000) break;
            index++;
        }
    }
    
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += arr[i];

    cout << sum << endl;

	return 0;
}