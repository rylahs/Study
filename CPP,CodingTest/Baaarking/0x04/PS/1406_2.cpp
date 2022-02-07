// BOJ 1406. 에디터
// Written Date : 22.01.20
// Writer : Rylah
// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;
void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    string str;
    cin >> str;
    int cursor = 0;
    for (auto c : str)
    {
        insert(cursor, c);
        cursor++;
    }
    int m;
    cin >> m;
    while (m--)
    {
        char operating;
        cin >> operating;
        if (operating == 'L')
        {
            if (pre[cursor] != -1)
                cursor = pre[cursor];
        }
        else if (operating == 'D') 
        {
            if (nxt[cursor] != -1)
                cursor = nxt[cursor];
        }
        else if (operating == 'B') {
            if (cursor != 0) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }

        else {
            char x;
            cin >> x;
            insert(cursor, x);
            cursor = nxt[cursor];
        }
    }

    traverse();
	return 0;
}