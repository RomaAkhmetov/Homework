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
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct Point
{
	ll x;
	ll y;
};

int main()
{
	ll n, m;
	cin >> n >> m;

	vector<vector<char>> v;
	ll cnt = 0;
	for (ll i = 0; i < n; i++)
	{
		vector<char> c(m);
		for (ll j = 0; j < m; j++)
		{
			cin >> c[j];

			if (c[j] == '#')
				cnt++;
		}

		v.push_back(c);
	}

	while (true)
	{
		ll sharp1 = 0;
		for (ll row = 0; row < n; row++)
			for (ll col = 0; col < m; col++)
				if (v[row][col] == '#')
					sharp1++;

		for (ll u = 0; u < n - 1; u++)
		{
			for (ll l = 0; l < m - 1; l++)
			{
				ll grid = 0;
				ll not_grid = 0;
				Point tmp;

				if (v[u][l] == '#')
					grid += 1;
				else
				{
					not_grid += 1;
					tmp.x = l;
					tmp.y = u;
				}
				if (v[u][l + 1] == '#')
					grid += 1;
				else
				{
					not_grid += 1;
					tmp.x = l + 1;
					tmp.y = u;
				}

				if (v[u + 1][l] == '#')
					grid += 1;
				else
				{
					not_grid += 1;
					tmp.x = l;
					tmp.y = u + 1;
				}

				if (v[u + 1][l + 1] == '#')
					grid += 1;
				else
				{
					not_grid += 1;
					tmp.x = l + 1;
					tmp.y = u + 1;
				}

				if (grid == 3 && not_grid == 1)
				{
					v[tmp.y][tmp.x] = '#';
					cnt++;
				}

			}

		}

		ll sharp2 = 0;
		for (ll row = 0; row < n; row++)
			for (ll col = 0; col < m; col++)
				if (v[row][col] == '#')
					sharp2++;

		if (sharp2 - sharp1 == 0)
			break;
	}
	
	cout << cnt;
}

//Z