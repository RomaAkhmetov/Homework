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

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ll n;
	cin >> n;

	vector <ll> a(n);
	vector <ll> r;
	ll cnt = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] > 0)
			cnt++;
		else if (a[i] <= 0)
		{
			r.push_back(cnt);
			cnt = 0;
		}
	}

	sort(r.begin(), r.end());
	cout << r[r.size() - 1];
}

//Z