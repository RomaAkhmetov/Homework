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

	ll bn_g = 4 * pow(2, (n - 4));
	ll Sn_g = (4 * (1 - pow(2, n - 3))) / -1;
	ll an_d = 3 + Sn_g;
	ll t_bn_g = bn_g;
	vector <ll> v = {an_d};
	while (an_d > 0)
	{
		ll res = an_d - t_bn_g;
		v.push_back(res);
		an_d = res;
		t_bn_g /= 2;
	}
	ll sum = 0;
	for (ll i = 0; i < v.size(); i++)
		sum += v[i];
	cout << sum;
}

//Z