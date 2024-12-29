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
#include <list>
#include <unordered_set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
	ll n;
	cin >> n;

	vector<pair<ll, ll>> v(n - 1);
	for (ll i = 0; i < (n - 1); i++) {
		ll a, b;
		cin >> a >> b;

		pair<ll, ll> tmp = { a, b };
		v[i] = tmp;
	}

	list <ll> l;
	while (!v.empty()) {
		
		pair<ll, ll> tmp = v[0];

		if (l.empty()) {	
			l.push_back(tmp.first);
			l.push_back(tmp.second);
			v.erase(v.begin());
		}
		else {
			ll first = *l.begin();
			ll last = l.back();

			for (ll i = 0; i < v.size(); i++) {
				if (v[i].second == first) {
					l.insert(l.begin(), v[i].first);
					v.erase(v.begin() + i);
				}
				else if (v[i].first == last) {
					l.push_back(v[i].second);
					v.erase(v.begin() + i);
				}
			}
		}
	}

	for (auto const& i : l) 
		std::cout << i << ' ';
}
//Z