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
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
	ll f;
	cin >> f;

	ll n, a, b, c;
	cin >> n >> a >> b >> c;

	vector<ll> v = { a, b, c };
	ll mx = 0;
	ll i_mx = -1;
	ll mn = 1e9;
	ll i_mn = -1;
	ll med = 0;
	for(ll i = 0; i < v.size(); i++) {
		if (v[i] > mx) {
			mx = v[i];
			i_mx = i;
		}
	}

	v.erase(v.begin() + i_mx);
	for (ll i = 0; i < v.size(); i++) {
		if (v[i] < mn) {
			mn = v[i];
			i_mn = i;
		}
	}
	v.erase(v.begin() + i_mn);

	med = v[0];
	if (f == 1) {
		ll res = a + b + c - 2 * n;
		if (res < 0)
			res = 0;

		cout << res;
	}
	else {
		ll res = mn;
		cout << res;
	}
}
//Z