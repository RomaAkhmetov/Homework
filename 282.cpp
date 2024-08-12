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
	ll w, h;
	cin >> w >> h;

	ll res = (h * (h + 1) / 2) * (w * (w + 1) / 2);
	cout << res;
}

//Z