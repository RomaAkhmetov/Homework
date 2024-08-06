#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>
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
#include <numbers>
#include <cstdint>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ll n;
	cin >> n;

	ll an_q = 6 + 3 * (n - 2);
	ll Sn_q = ((6 + an_q) * (n - 1)) / 2;
	ll an_d = 3 + Sn_q;
	vector <ll> v = { an_d };
	ll t_an_q = an_q;
	ll t_an_d = an_d;
	while (t_an_q > 0)
	{
		ll r = t_an_d - t_an_q;
		v.push_back(r);
		t_an_d = r;
		t_an_q -= 3;
	}
	ll sum = 0;
	for (ll i = 0; i < v.size(); i++)
		sum += v[i];
	cout << sum;
}

//Z
