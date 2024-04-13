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

ll gcd(ll x, ll y) {

	if (x == 0)
		return y;
	if (y == 0)
		return x;


	return gcd(y, x % y);
}

int main()
{
	ll n;
	cin >> n;

	ll cnt = 0;
	ll n2 = n;
	while (n2 != 0)
	{
		n2--;
		ll r = gcd(n, n2);
		if (r == 1)
			cnt++;
		
	}
	cout << cnt;
}