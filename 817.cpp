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
	ll n, m, d, k;
	cin >> n >> m >> d >> k;

	ll res = (d * k * n + d * k * m) - (d * d * n * m);
	cout << res;
}

//Z