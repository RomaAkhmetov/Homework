#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <numeric>
#include <queue>
#include <map>
#include <iomanip>
#include <sstream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
	vector <vector <char>> cor(3);
	for (ll i = 0; i < 3; i++)
	{
		vector <char> a(3);
		cor[i] = a;
		for (ll j = 0; j < 3; j++)
		{
			cin >> cor[i][j];
		}
	}
	if ((cor[0][0] == 'X' && cor[1][0] == 'X' && cor[2][0] == 'X') 
		|| (cor[0][1] == 'X' && cor[1][1] == 'X' && cor[2][1] == 'X') 
		|| (cor[0][2] == 'X' && cor[1][2] == 'X' && cor[2][2] == 'X')
		|| (cor[0][0] == 'X' && cor[0][1] == 'X' && cor[0][2] == 'X') 
		|| (cor[1][0] == 'X' && cor[1][1] == 'X' && cor[1][2] == 'X') 
		|| (cor[2][0] == 'X' && cor[2][1] == 'X' && cor[2][2] == 'X')
		|| (cor[0][0] == 'X' && cor[1][1] == 'X' && cor[2][2] == 'X') 
		|| (cor[0][2] == 'X' && cor[1][1] == 'X' && cor[2][0] == 'X'))
	{
		cout << "Win";
		return 0;
	}
	else if ((cor[0][0] == 'O' && cor[1][0] == 'O' && cor[2][0] == 'O') || (cor[0][1] == 'O' && cor[1][1] == 'O' && cor[2][1] == 'O') || (cor[0][2] == 'O' && cor[1][2] == 'O' && cor[2][2] == 'O')
		|| (cor[0][0] == 'O' && cor[0][1] == 'O' && cor[0][2] == 'O') || (cor[1][0] == 'O' && cor[1][1] == 'O' && cor[1][2] == 'O') || (cor[2][0] == 'O' && cor[2][1] == 'O' && cor[2][2] == 'O')
		|| (cor[0][0] == 'O' && cor[1][1] == 'O' && cor[2][2] == 'O') || (cor[0][2] == 'O' && cor[1][1] == 'O' && cor[2][0] == 'O'))
	{
		cout << "Lose";
		return 0;
	}
	else
	{
		cout << "Draw";
		return 0;
	}
}