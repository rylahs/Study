#include <bits/stdc++.h>
using namespace std;

void printGame(int zCount);
void playFirstGame();
void playEtcGame();

vector<int> v;
int inputPlay;
int zeroCount = 0;

int main_2490(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	playFirstGame();
	for (int i = 0; i < 2; i++)
		playEtcGame();

	return 0;
}

void playFirstGame()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> inputPlay;
		v.emplace_back(inputPlay);
	}

	zeroCount = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
			zeroCount++;
	}
	printGame(zeroCount);
}

void playEtcGame()
{
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];

	zeroCount = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
			zeroCount++;
	}
	printGame(zeroCount);

}

void printGame(int zCount)
{
	switch (zCount)
	{
	case 0:
		cout << "E" << 'n';
		break;
	case 1:
		cout << "A" << '\n';
		break;
	case 2:
		cout << "B" << '\n';
		break;
	case 3:
		cout << "C" << '\n';
		break;			
	case 4:				
		cout << "D" << '\n';
		break;
	}
}