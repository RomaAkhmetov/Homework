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

	vector <ll> a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	ll k;
	cin >> k;

	ll res = 0;
	for (ll j = 0; j < a.size(); j++)
		res += min(a[j], k);
	cout << res;
}

//Z