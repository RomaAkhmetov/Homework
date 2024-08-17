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



int main()
{
	ll n;
	cin >> n;

	vector<vector<ll>> v;
	for (ll i = 0; i < n; i++)
	{
		vector<ll> c(2);

		for (ll j = 0; j < 2; j++)
			cin >> c[j];
		v.push_back(c);
	}
	double x = 0;
	double y = 0;
	for (ll p = 0; p < n; p++)
	{
		if (v[p][0] == 8)
		{
			x += (v[p][1] * (1.0 / sqrt(2.0))) * -1.0;
			y += v[p][1] * (1.0 / sqrt(2.0));
		}
		else if (v[p][0] == 2)
		{
			x += (v[p][1] * (1.0 / sqrt(2.0)));
			y += v[p][1] * (1.0 / sqrt(2.0));
		}
		else if (v[p][0] == 4)
		{
			x += (v[p][1] * (1.0 / sqrt(2.0)));
			y += v[p][1] * (1.0 / sqrt(2.0)) * -1.0;
		}
		else if (v[p][0] == 6)
		{
			x += (v[p][1] * (1.0 / sqrt(2.0))) * -1.0;
			y += v[p][1] * (1.0 / sqrt(2.0)) * -1.0;
		}
		else if (v[p][0] == 3)
			x += v[p][1];
		else if (v[p][0] == 7)
			x -= v[p][1];
		else if(v[p][0] == 1)
			y += v[p][1];
		else if (v[p][0] == 5)
			y -= v[p][1];
	}
	cout << fixed << setprecision(3) << x << ' ';
	cout << fixed << setprecision(3) << y;

}

//Z