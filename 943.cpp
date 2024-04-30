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
	ll n, m, y, x;
	cin >> n >> m >> y >> x;
	
	vector <vector <ll>> a;
	for (ll i = 0; i < n; i++)
	{
		vector <ll> g;
		for (ll j = 0; j < m; j++)
		{
			if (i % 2 != 0)
				g.push_back(i * m + (m - 1) - j);
			else
				g.push_back(i * m + j);
		}
		a.push_back(g);

	}
	cout << a[y - 1][x - 1];
}

//Z