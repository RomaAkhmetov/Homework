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
	ll n, w, d, P;
	cin >> n >> w >> d >> P;

	ll an = 1 + (n - 2);
	ll Sn = ((1 + an) * (n - 1)) / 2;
	ll x = abs(((P - w * Sn) / d));
	if (x == 0)
	{
		cout << n;
		return 0;
	}
	cout << x;
}

//Z