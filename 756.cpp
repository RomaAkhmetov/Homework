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
	ll m, n;
	cin >> m >> n;

	ll res = (((n - 1) * m) + ((m - 1) * n)) - (n * m - 1);
	cout << res;
}
