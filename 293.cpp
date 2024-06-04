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
	ll n;
	cin >> n;

	vector <double> v(n);
	vector <double> p(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	for (ll j = 0; j < n; j++)
		cin >> p[j];
	vector <double> res;
	double na = 0;
	for (ll t = 0; t < n; t++)
	{
		na = v[t] * (p[t] / 100.0);
		res.push_back(na);
		na = 0;
	}
	double max = 0.0;
	ll ind_max = 0;
	for (ll u = 0; u < res.size(); u++)
	{
		if (res[u] > max)
		{
			max = res[u];
			ind_max = u;
		}
	}
	cout << ind_max + 1;
}

//Z