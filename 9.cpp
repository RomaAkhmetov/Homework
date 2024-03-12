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
	ll indmn = 0;
	ll indmx = 0;
	ll mn = 1e9;
	ll mx = 0;
	vector <ll> N;

	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];

		if (mn > a[i])
		{
			mn = a[i];
			indmn = i;
		}
		else if (mx < a[i])
		{
			mx = a[i];
			indmx = i;
		}

		if (a[i] > 0)
			N.push_back(a[i]);
	}
	ll sum = 0;
	for (ll j = 0; j < N.size(); j++)
	{
		sum += N[j];
	}
	ll r = abs(indmx - indmn) - 1;
	if (r == 1)
		cout << sum << ' ' << a[indmn + 1];
	else if (r == 0)
		cout << sum << ' ' << 0;
	else
	{
		ll pr = 1;
		ll f = min(indmn, indmx) + 1;
		while (f < max(indmn, indmx))
		{
			pr *= a[f];
			f++;
		}
		cout << sum << ' ' << pr;
	}
}                         