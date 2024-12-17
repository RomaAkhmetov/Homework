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
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (ll p = 0; p < n; p++)
		cin >> a[p];

	ll cnt = 0;
	for (ll i = 0; i <= (n - 2); i++)
	{
		for (ll j = i + 1; j <= (n - 1); j++)
		{
			if ((a[i] + (j + 1)) == (a[j] + (i + 1)))
				cnt++;
		}
	}
	cout << cnt;
}

//Z