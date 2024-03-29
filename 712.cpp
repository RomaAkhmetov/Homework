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
	ll w, h, n;
	cin >> w >> h >> n;

	vector <ll> v;
	for (ll i = 1; i <= h; i++)
	{
		v.push_back(i);
	}
	ll l = 0;
	ll r = v.size() - 1;
	ll S = w * h;
 	while (l <= r)
	{
		ll m = (l + r) / 2;
		ll u = pow(v[m], 2);
		ll p = u * u;
		if (p >= (S * n))
		{
			cout << u;
			return 0;
		}
		else
			l = m + 1;
	}
}


