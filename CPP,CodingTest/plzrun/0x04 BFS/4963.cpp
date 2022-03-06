// plzrun 04. Graph
// Written by : Rylah
// Date : 2022.03.05
// 4963
// https://www.acmicpc.net/problem/4963

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int land[52][52];
bool vis[52][52];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (1)
    {
        int w, h;
        cin >> w >> h;
        
        if (w == 0 && h == 0)
            break;
        
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
                cin >> land[i][j];
            fill(vis[i], vis[i] + w + 1, false);
        }

        queue<pair<int, int>> Q;
        int cnt = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (land[i][j] == 1 && !vis[i][j])
                {
                    cnt++;
                    vis[i][j] = true;
                    Q.push({ i, j });
                }

                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir = 0; dir < 8; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= h || ny < 0 || ny >= w)
                            continue;
                        if (vis[nx][ny] || land[nx][ny] != 1)
                            continue;

                        vis[nx][ny] = true;
                        Q.push({ nx, ny });
                    }
                }
            }
        }
        cout << cnt << "\n";


    }
    return 0;
}