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
	ll n, k;
	cin >> n >> k;

	if (n < k)
	{
		cout << -1;
		return 0;
	}
	vector<ll> a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	vector<ll> baz;
	for (ll j = 1; j <= k; j++)
		baz.push_back(j);

	for (ll u = 0; u <= a.size() - k; u++)
	{
		vector<ll> p;
		ll h = u;
		while (h < (k + u))
		{
			p.push_back(a[h]);
			h++;
		}

		sort(p.begin(), p.end());
		if (p == baz)
		{
			cout << u + 1;
			return 0;
		}
	}
	cout << -1;
}

//Z