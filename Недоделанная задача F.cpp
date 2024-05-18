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
	ll t;
	cin >> t;

	for (ll i = 0; i < t; i++)
	{
		ll r;
		cin >> r;

		vector <ll> a(r);
		for (ll j = 1; j <= a.size(); j++)
		{
			a.push_back(j);
		}
		ll l = 0;
		ll ri = a.size() - 1;
		ll cnt = 0;
		ll m = 0;
		while (l < r)
		{
			m = (l + ri) / 2;
			ll tm = m;
			while (a[tm] >= 0)
			{
				if (sqrt(pow(a[m], 2) + pow(a[tm], 2)) >= r && sqrt(pow(a[m], 2) + pow(a[tm], 2)) < (r + 1))
				{
					cnt += 4;
					tm--;
				}
			}

		}
	}
}

//Z