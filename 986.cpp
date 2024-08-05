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

	ll b1, b2;
	cin >> b1 >> b2;

	ll l;
	cin >> l;

	vector <vector<ll>> v;
	for (ll i = 0; i < n; i++)
	{
		vector <ll> c(2);
		for (ll j = 0; j < 2; j++)
			cin >> c[j];
		v.push_back(c);
	}
	for (ll p = 0; p < v.size(); p++)
	{
		double s = sqrt(pow(v[p][0] - b1, 2.0) + pow(v[p][1] - b2, 2.0));
		if (s <= l)
		{
			cout << p + 1;
			return 0;
		}
	}
	cout << "Yes";
}

//Z
