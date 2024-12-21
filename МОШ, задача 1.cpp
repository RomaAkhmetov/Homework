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
	ll n, p;
	cin >> n >> p;

	vector<ll> a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	ll i_max = -1e6;
	ll j_max = -1e6;
	ll max = -1e9;
	for (ll index = 0; index < a.size(); index++)
	{
		for (ll k = index + 1; k <= a.size() - 1; k++)
		{
			if ((a[index] + a[k]) % p > max)
			{
				max = (a[index] + a[k]) % p;
				i_max = index + 1;
				j_max = k + 1;
			}
		}
	}
	cout << i_max << ' ' << j_max;
}

//Z