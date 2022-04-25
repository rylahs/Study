#include <iostream>
#include <vector>

#define endl "\n"
#define MAX 310
using namespace std;

int N, M, K;
int Arr[MAX][MAX];
int Sum[MAX][MAX];
vector<pair<pair<int, int>, pair<int, int>>> Cmd;

void Input()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> Arr[i][j];
        }
    }
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        Cmd.push_back(make_pair(make_pair(a, b), make_pair(c, d)));
    }
}

void Solution()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            Sum[i][j] = Sum[i - 1][j] + Sum[i][j - 1] - Sum[i - 1][j - 1] + Arr[i][j];
        }
    }

    for (int i = 0; i < K; i++)
    {
        int x = Cmd[i].first.first;
        int y = Cmd[i].first.second;
        int xx = Cmd[i].second.first;
        int yy = Cmd[i].second.second;

        cout << Sum[xx][yy] - Sum[xx][y - 1] - Sum[x - 1][yy] + Sum[x - 1][y - 1] << endl;
    }
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}
