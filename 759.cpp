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
	ll n, m;
	cin >> n >> m;

	vector <ll> c(n);
	for (ll i = 0; i < n; i++)
		cin >> c[i];
	sort(c.rbegin(), c.rend());
	ll sum = 0;
	ll j = 0;
	for (ll p = 0; p < m; p++)
	{
		if (c[j] > 0)
		{
			sum += c[j];
			j++;
		}
	}
	cout << sum;
}

//Z