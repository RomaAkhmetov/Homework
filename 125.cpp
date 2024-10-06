#define _USE_MATH_DEFINES_
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

bool convertTocolour(vector<ll> colours, ll r, ll g)
{
	vector<ll> new_colours = { colours[r], colours[g] };
	if (new_colours[0] != new_colours[1])
		return 1;
	else
		return 0;
}

int main()
{
	ll n;
	cin >> n;

	vector<vector<bool>> v(n);
	for (ll i = 0; i < n; i++)
	{
		vector<bool> c(n);
		for (ll j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;

			c[j] = (tmp == 1);
		}
		v[i] = c;
	}

	vector<ll> colours(n);
	for (ll h = 0; h < n; h++)
		cin >> colours[h];

	ll cnt = 0;
	for (ll r = 0; r < n; r++)
	{
		for (ll g = 0; g < n; g++)
		{
			if (v[r][g] == 1 && convertTocolour(colours, r, g) == true)
				cnt++;
		}
	}
	cout << cnt / 2;
}

//Z