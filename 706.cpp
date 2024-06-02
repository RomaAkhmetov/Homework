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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 


int main()
{
	ll r, x, y;
	cin >> r >> x >> y;

	double res = (r * abs(x)) / (2.0 * r - y);
	cout << fixed << setprecision(2) << res;
}

//Z