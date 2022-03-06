// plzrun 04. Graph
// Written by : Rylah
// Date : 2022.03.05
// 2667
// https://www.acmicpc.net/problem/2667

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

string board[26];
int area[26][26];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
        fill(area[i], area[i] + n, -1);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == '0')
                area[i][j] = 0;
        }
    }

    int cnt = 0;
    vector<int> v;
    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int oneArea = 0;
            if (board[i][j] == '1' && area[i][j] == -1)
            {
                oneArea++;
                cnt++;
                area[i][j] = cnt;
                Q.push({ i, j });
            }

            while (!Q.empty())
            {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (board[nx][ny] == '0' || area[nx][ny] >= 0)
                        continue;

                    area[nx][ny] = area[cur.X][cur.Y];
                    oneArea++;
                    Q.push({ nx, ny });
                }
            }
            if (oneArea > 0)
                v.emplace_back(oneArea);
        }
    }

    sort(v.begin(), v.end(), less<>());
    cout << cnt << "\n";
    for (auto& e : v)
        cout << e << "\n";

    return 0;
}