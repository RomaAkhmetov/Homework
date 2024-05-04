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
	ll n, m;
	cin >> n >> m;

	vector <string> names;
	vector <ll> sums;
	for (ll i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		names.push_back(s);
		ll sum = 0;
		for (ll j = 0; j < m; j++)
		{
			ll p;
			cin >> p;

			sum += p;
		}
		sums.push_back(sum);
		sum = 0;
	}
	ll min = 1e9;
	ll indmin = -1;
	for (ll u = 0; u < sums.size(); u++)
	{
		if (min > sums[u])
		{
			min = sums[u];
			indmin = u;
		}
	}
	cout << names[indmin];
}

//Z