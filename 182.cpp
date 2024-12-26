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

double distance(ll x1, ll y1, ll x2, ll y2) {
	ll c1 = abs(x2 - x1);
	ll c2 = abs(y2 - y1);
	double Pif = sqrt(pow(c1, 2.0) + pow(c2, 2.0));
	return Pif;
}

int main()
{
	ll x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double d = distance(x1, y1, x2, y2);
	double d1 = distance(x1, y1, x3, y3);
	double d2 = distance(x2, y2, x3, y3);

	if (max(d, max(d1, d2)) == d) {
		ll xp1 = x1;
		ll yp1 = y1;
		ll xp2 = x3;
		ll yp2 = y3;
		ll v1_x = xp2 - xp1;
		ll v1_y = yp2 - yp1;
		ll xp3 = x2;
		ll yp3 = y2;
		ll xr = xp3 - v1_x;
		ll yr = yp3 - v1_y;
		cout << xr << ' ' << yr;
	}
	else if (max(d, max(d1, d2)) == d1) {
		ll xp1 = x1;
		ll yp1 = y1;
		ll xp2 = x2;
		ll yp2 = y2;
		ll xp3 = x3;
		ll yp3 = y3;
		ll v1_x = xp2 - xp1;
		ll v1_y = yp2 - yp1;
		ll xr = xp3 - v1_x;
		ll yr = yp3 - v1_y;
		cout << xr << ' ' << yr;
	}
	else {
		ll xp1 = x2;
		ll yp1 = y2;
		ll xp2 = x1;
		ll yp2 = y1;
		ll xp3 = x3;
		ll yp3 = y3;
		ll v1_x = xp2 - xp1;
		ll v1_y = yp2 - yp1;
		ll xr = xp3 - v1_x;
		ll yr = yp3 - v1_y;
		cout << xr << ' ' << yr;
	}
}
//Z