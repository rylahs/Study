#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = -1;
	
	while (true)
	{
		int zero = 0, one = 0;
		cin >> N;
		if (N == 0)
			break;

		vector<int> v(N, 0);
		for (int i = 0; i < N; i++)
		{
			cin >> v[i];

			if (v[i] == 0)
				zero++;
			else
				one++;
		}

		sort(v.begin(), v.end());
        int a = v[zero], b = v[zero + 1];
        //0이 짝수개
        if (zero % 2 == 0) {
            //0이 아닌 숫자가 짝수개
            if (one % 2 == 0) {
                for (int i = 0; i < zero / 2; i++)
                    a *= 10;
                for (int i = 0; i < zero / 2; i++)
                    b *= 10;

                for (int i = zero + 2; i < N; i += 2)
                    a = a * 10 + v[i];
                for (int i = zero + 3; i < N; i += 2)
                    b = b * 10 + v[i];
            }
            //0이 아닌 숫자가 홀수개
            if (one % 2 == 1) {
                for (int i = 0; i < zero / 2; i++)
                    a *= 10;
                for (int i = 0; i < zero / 2; i++)
                    b *= 10;

                for (int i = zero + 2; i < N; i += 2)
                    a = a * 10 + v[i];
                for (int i = zero + 3; i < N; i += 2)
                    b = b * 10 + v[i];
            }
        }

        //0이 홀수개
        if (zero % 2 == 1) {
            //0이 아닌 숫자가 짝수개
            if (one % 2 == 0) {
                for (int i = 0; i < zero / 2 + 1; i++)
                    a *= 10;
                for (int i = 0; i < zero / 2; i++)
                    b *= 10;

                for (int i = zero + 2; i < N; i += 2)
                    a = a * 10 + v[i];
                for (int i = zero + 3; i < N; i += 2)
                    b = b * 10 + v[i];
            }
            //0이 아닌 숫자가 홀수개
            if (one % 2 == 1) {
                for (int i = 0; i < zero / 2; i++)
                    a *= 10;
                for (int i = 0; i < zero / 2 + 1; i++)
                    b *= 10;

                for (int i = zero + 2; i < N; i += 2)
                    a = a * 10 + v[i];
                for (int i = zero + 3; i < N; i += 2)
                    b = b * 10 + v[i];
            }
        }
        cout << a + b << '\n';
    }

	return 0;
}