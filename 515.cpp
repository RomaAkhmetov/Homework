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

	vector<ll> y = { 0, 0 };
	vector<vector<ll>> a = { y };
	for (ll i = 0; i < n; i++)
	{
		vector <ll> c(2);
		for (ll j = 0; j < 2; j++)
			cin >> c[j];
		a.push_back(c);
	}
	double sum = 0.000;
	ll k = 0;
	for (ll h = 0; h < n; h++)
	{
		if (h == n)
		{
			double Pifagor = sqrt(pow(abs(a[h][k] - a[h - 1][k]), 2.0) + pow(abs(a[h][k + 1] - a[h - 1][k + 1]), 2.0));
			sum += Pifagor;
		}
		else
		{
			double S = sqrt(pow(abs(a[h + 1][k] - a[h][k]), 2.0) + pow(abs(a[h + 1][k + 1] - a[h][k + 1]), 2.0));
			sum += S;
		}
	}
	double Dop = sqrt(pow(a[n][0], 2) + pow(a[n][1], 2));
	cout << fixed << setprecision(3) << sum + Dop;
}

//Z
