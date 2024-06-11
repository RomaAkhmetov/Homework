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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 

int main()
{
	ull n, m;
	cin >> n >> m;

	vector <vector<char>> a;
	for (ll i = 0; i < n; i++)
	{
		vector <char> c;
		for (ll j = 0; j < m; j++)
		{
			char tmp;
			cin >> tmp;

			c.push_back(tmp);
		}
		a.push_back(c);
	}
	ull cnt = 0;
	for (ll u = 0; u < n; u++)
	{
		for (ll p = 0; p < m; p++)
		{
			if (a[u][p] == '.')
			{
				if (u == 0 && p == 0 && a[u][p + 1] != '*' && a[u + 1][p] != '*')
					cnt++;
				else if (u != 0 && p == 0 && a[u][p + 1] != '*' && a[u + 1][p] != '*' && a[u - 1][p] != '*')
					cnt++;
				else if (u == 0 && p != 0 && a[u][p - 1] != '*' && a[u][p + 1] != '*' && a[u + 1][p] != '*')
					cnt++;
				else if (u != n - 1 && p == m - 1 && a[u][p - 1] != '*' && a[u - 1][p] != '*' && a[u + 1][p] != '*')
					cnt++;
				else if (u != n - 1 && p == m - 1 && (a[u][p - 1] == '*' || a[u - 1][p] == '*' || a[u + 1][p] == '*'))
					continue;
				else if (u == n - 1 && p == 0 && a[u - 1][p] != '*' && a[u][p + 1] != '*')
					cnt++;
				else if (u == 0 && p == m - 1 && a[u][p - 1] != '*' && a[u + 1][p] != '*')
					cnt++;
				else if (u == n - 1 && p != m - 1 && a[u][p - 1] != '*' && a[u][p + 1] != '*' && a[u - 1][p] != '*')
					cnt++;
				else if (u == n - 1 && p != m - 1 && (a[u][p - 1] == '*' || a[u][p + 1] == '*' || a[u - 1][p] == '*'))
					continue;
				else if (u == n - 1 && p == m - 1 && a[u][p - 1] != '*' && a[u - 1][p] != '*')
					cnt++;
				else if (u == n - 1 && p == m - 1 && (a[u][p - 1] == '*' || a[u - 1][p] == '*'))
					continue;
				else if (u != 0 && p != 0 && a[u][p - 1] != '*' && a[u][p + 1] != '*' && a[u - 1][p] != '*' && a[u + 1][p] != '*')
					cnt++;
			}
		}
	}
	cout << cnt;
}

//Z